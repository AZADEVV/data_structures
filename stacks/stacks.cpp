#include <iostream>
#include <vector>

int main() {
    using namespace std;

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int q;
    if (!(cin >> q)) return 0;

    vector<int> stack;
    bool first_out = true;

    while (q--) {
        int type;
        cin >> type;

        if (type == 1) {
            int v;
            cin >> v;
            stack.push_back(v);
        }
        else if (type == 2) {
            if (!first_out) cout << " ";
            first_out = false;

            if (stack.empty()) {
                cout << -1;
            } else {
                cout << stack.back();
                stack.pop_back();
            }
        }
    }
    cout << endl;

    return 0;
}
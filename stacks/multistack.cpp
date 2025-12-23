#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    using namespace std;

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int q;
    if (!(cin >> q)) return 0;

    vector<int> st;
    bool first_out = true;

    while (q--) {
        int type;
        cin >> type;

        if (type == 1) {
            int v;
            cin >> v;
            st.push_back(v);
        } 
        else if (type == 2) {
            int k;
            cin >> k;

            long long sum = 0;
            int to_remove = min((int)st.size(), k);

            for (int i = 0; i < to_remove; ++i) {
                sum += st.back();
                st.pop_back();
            }

            if (!first_out) cout << " ";
            cout << sum;
            first_out = false;
        }
    }
    cout << endl;

    return 0;
}
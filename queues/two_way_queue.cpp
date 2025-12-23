#include <iostream>
#include <deque>


int main() {
    using namespace std;

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int q;
    if (!(cin >> q)) return 0;

    deque<int> dq;
    bool first_out = true;

    while (q--) {
        int type;
        cin >> type;

        if (type == 1) {
            char side;
            int v;
            cin >> side >> v;
            if (side == 'f') {
                dq.push_front(v);
            } else {
                dq.push_back(v);
            }
        } 
        else if (type == 2) {
            char side;
            cin >> side;

            if (!first_out) cout << " ";
            first_out = false;

            if (dq.empty()) {
                cout << -1;
            } else {
                if (side == 'f') {
                    cout << dq.front();
                    dq.pop_front();
                } else {
                    cout << dq.back();
                    dq.pop_back();
                }
            }
        }
    }
    cout << endl;

    return 0;
}
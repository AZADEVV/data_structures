#include <iostream>
#include <set>
#include <string>


int main() {
    using namespace std;

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int q;
    if (!(cin >> q)) return 0;

    set<int> s;
    bool first_output = true;

    while (q--) {
        int type;
        cin >> type;

        if (type == 1) {
            int v;
            cin >> v;
            s.insert(v);
        }
        else if (type == 2) {
            int v;
            cin >> v;
            s.erase(v);
        }
        else if (type == 3) {
            int v;
            string query_type;
            cin >> v >> query_type;

            if (!first_output) cout << " ";
            first_output = false;

            auto it = s.end();
            bool found = false;

            if (query_type == "ls") {
                it = s.lower_bound(v);
                if (it != s.begin()) {
                    --it;
                    found = true;
                }
            } else if (query_type == "le") {
                it = s.upper_bound(v);
                if (it != s.begin()) {
                    --it;
                    found = true;
                }
            } else if (query_type == "ge") {
                it = s.lower_bound(v);
                if (it != s.end()) {
                    found = true;
                }
            } else if (query_type == "gs") {
                it = s.upper_bound(v);
                if (it != s.end()) {
                    found = true;
                }
            }

            if (found) {
                cout << *it;
            } else {
                cout << -1;
            }
        }
    }
    cout << endl;

    return 0;
}
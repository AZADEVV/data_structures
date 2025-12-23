#include <iostream>
#include <map>
#include <string>

int main() {
    using namespace std;

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int q;
    if (!(cin >> q)) return 0;

    map<int, int> dict;

    while (q--) {
        int type;
        cin >> type;

        if (type == 1) {
            int k, v;
            cin >> k >> v;
            dict[k] = v;
        }
        else if (type == 2) {
            int k;
            cin >> k;
            dict.erase(k);
        }
        else if (type == 3) {
            int k;
            string s;
            cin >> k >> s;

            map<int, int>::iterator it;
            bool found = false;

            if (s == "ls") { // < k
                it = dict.lower_bound(k);
                if (it != dict.begin()) {
                    --it;
                    found = true;
                }
            } else if (s == "le") { // <= k
                it = dict.upper_bound(k);
                if (it != dict.begin()) {
                    --it;
                    found = true;
                }
            } else if (s == "ge") { // >= k
                it = dict.lower_bound(k);
                if (it != dict.end()) {
                    found = true;
                }
            } else if (s == "gs") { // > k
                it = dict.upper_bound(k);
                if (it != dict.end()) {
                    found = true;
                }
            }

            if (found) {
                cout << it->first << " " << it->second << "\n";
            } else {
                cout << "-1 -1\n";
            }
        }
    }

    return 0;
}
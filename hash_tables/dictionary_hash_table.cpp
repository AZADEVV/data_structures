#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int q;
    if (!(cin >> q)) return 0;

    unordered_map<int, int> dict;
    dict.reserve(q);

    for (int i = 0; i < q; ++i) {
        int type, k;
        cin >> type >> k;

        if (type == 1) {
            int v;
            cin >> v;
            auto it = dict.find(k);
            if (it != dict.end()) {
                cout << it->second;
                it->second = v;
            } else {
                cout << -1;
                dict[k] = v;
            }
        } 
        else if (type == 2) {
            auto it = dict.find(k);
            if (it != dict.end()) {
                cout << it->second;
                dict.erase(it);
            } else {
                cout << -1;
            }
        } 
        else if (type == 3) {
            auto it = dict.find(k);
            if (it != dict.end()) {
                cout << it->second;
            } else {
                cout << -1;
            }
        }

        if (i < q - 1) cout << " ";
    }
    cout << endl;

    return 0;
}
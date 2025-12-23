#include <iostream>
#include <unordered_set>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int q;
    if (!(cin >> q)) return 0;

    unordered_set<int> s;
    
    s.reserve(q);

    for (int i = 0; i < q; ++i) {
        int t, v;
        cin >> t >> v;

        if (t == 1) {
            if (s.insert(v).second) {
                cout << 1;
            } else {
                cout << 0;
            }
        } 
        else if (t == 2) {
            if (s.erase(v)) {
                cout << 1;
            } else {
                cout << 0;
            }
        } 
        else if (t == 3) {
            if (s.count(v)) {
                cout << 1;
            } else {
                cout << 0;
            }
        }

        if (i < q - 1) cout << " ";
    }
    cout << endl;

    return 0;
}
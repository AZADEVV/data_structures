#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];

    vector<pair<int, int>> swaps;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - 1; j++) {
            if (a[j] > a[j + 1] || (a[j] == a[j + 1] && b[j] > b[j + 1])) {
                swap(a[j], a[j + 1]);
                swap(b[j], b[j + 1]);
                swaps.push_back({j + 1, j + 2});
            }
        }
    }

    bool possible = true;
    for (int i = 0; i < n - 1; i++) {
        if (b[i] > b[i + 1]) {
            possible = false;
            break;
        }
    }

    if (!possible) {
        cout << -1 << endl;
    } else {
        cout << swaps.size() << endl;
        for (auto p : swaps) {
            cout << p.first << " " << p.second << endl;
        }
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
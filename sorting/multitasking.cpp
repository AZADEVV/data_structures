#include <iostream>
#include <vector>

int main() {
    using namespace std;

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, k;
    if (!(cin >> n >> m >> k)) return 0;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            int x;
            cin >> x;
        }
    }

    cout << m * (m - 1) / 2 << "\n";

    if (k == 0) {
        for (int i = 1; i <= m; ++i) {
            for (int j = i + 1; j <= m; ++j) {
                cout << i << " " << j << "\n";
            }
        }
    } else {
        for (int i = 1; i <= m; ++i) {
            for (int j = i + 1; j <= m; ++j) {
                cout << j << " " << i << "\n";
            }
        }
    }

    return 0;
}
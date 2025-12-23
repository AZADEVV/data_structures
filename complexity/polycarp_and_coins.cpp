#include <iostream>

using namespace std;

void solve() {
    int n;
    cin >> n;

    int c1 = n / 3;
    int c2 = n / 3;

    if (n % 3 == 1) {
        c1++;
    } else if (n % 3 == 2) {
        c2++;
    }

    cout << c1 << " " << c2 << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
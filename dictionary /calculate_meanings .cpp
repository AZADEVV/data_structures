#include <iostream>
#include <vector>

using namespace std;

int cnt[1000001];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    if (!(cin >> n)) return 0;

    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        if (x <= 1000000) {
            cnt[x]++;
        }
    }

    for (int i = 1; i <= 1000000; ++i) {
        if (cnt[i] > 0) {
            cout << i << " " << cnt[i] << "\n";
        }
    }

    return 0;
}
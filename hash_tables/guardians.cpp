#include <iostream>
#include <vector>
#include <map>

int main() {
    using namespace std;

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    map<int, int> countX;
    map<int, int> countY;
    map<pair<int, int>, int> countXY;

    for (int i = 0; i < n; ++i) {
        int x, y;
        cin >> x >> y;
        countX[x]++;
        countY[y]++;
        countXY[{x, y}]++;
    }

    long long ans = 0;

    for (auto const& [val, freq] : countX) {
        ans += 1LL * freq * (freq - 1) / 2;
    }

    for (auto const& [val, freq] : countY) {
        ans += 1LL * freq * (freq - 1) / 2;
    }

    for (auto const& [point, freq] : countXY) {
        ans -= 1LL * freq * (freq - 1) / 2;
    }

    cout << ans << endl;

    return 0;
}
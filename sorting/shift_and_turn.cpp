#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const int INF = 1e9;

int get_nd(const vector<int>& a) {
    int n = a.size();
    int drops = 0, last_drop = -1;
    for (int i = 0; i < n - 1; ++i) {
        if (a[i] > a[i+1]) {
            drops++;
            last_drop = i;
        }
    }
    if (drops == 0) return 0;
    if (drops == 1 && a[n-1] <= a[0]) return n - 1 - last_drop;
    return INF;
}

int get_ni(const vector<int>& a) {
    int n = a.size();
    int jumps = 0, last_jump = -1;
    for (int i = 0; i < n - 1; ++i) {
        if (a[i] < a[i+1]) {
            jumps++;
            last_jump = i;
        }
    }
    if (jumps == 0) return 0;
    if (jumps == 1 && a[n-1] >= a[0]) return n - 1 - last_jump;
    return INF;
}

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) cin >> a[i];

    int d1 = get_nd(a);
    int d2 = get_ni(a);

    reverse(a.begin(), a.end());
    int d3 = get_nd(a);
    int d4 = get_ni(a);

    int ans = INF;
    ans = min(ans, d1);
    ans = min(ans, d2 + 1);
    ans = min(ans, d3 + 1);
    ans = min(ans, d4 + 2);

    if (ans >= INF) cout << -1 << endl;
    else cout << ans << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
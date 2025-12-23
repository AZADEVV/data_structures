#include <bits/stdc++.h>

int main() {
    using namespace std;

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;

    vector<pair<int,int>> v;
    v.reserve(n);

    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        v.emplace_back(x, i + 1);
    }

    sort(v.begin(), v.end());

    for (auto &p : v) {
        cout << p.second << " ";
    }

    return 0;
}




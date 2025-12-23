#include <iostream>
#include <vector>
#include <set>


int main() {
    using namespace std;

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    set<int> alive;
    for (int i = 1; i <= n; ++i) {
        alive.insert(i);
    }

    vector<int> defeated_by(n + 1, 0);

    for (int i = 0; i < m; ++i) {
        int l, r, x;
        cin >> l >> r >> x;

        auto it = alive.lower_bound(l);

        while (it != alive.end() && *it <= r) {
            int current_knight = *it;

            if (current_knight == x) {
                it++;
            } else {
                defeated_by[current_knight] = x;
                it = alive.erase(it);
            }
        }
    }

    for (int i = 1; i <= n; ++i) {
        cout << defeated_by[i] << (i == n ? "" : " ");
    }
    cout << endl;

    return 0;
}
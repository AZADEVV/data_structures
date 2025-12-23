#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, k;
    if (!(cin >> n >> m >> k)) return 0;

    vector<int> app_at(n);
    vector<int> pos_of(n + 1);

    for (int i = 0; i < n; ++i) {
        cin >> app_at[i];
        pos_of[app_at[i]] = i;
    }

    long long total_moves = 0;

    for (int i = 0; i < m; ++i) {
        int launched_app;
        cin >> launched_app;

        int current_pos = pos_of[launched_app];
        
        total_moves += (current_pos / k) + 1;

        if (current_pos > 0) {
            int prev_pos = current_pos - 1;
            int prev_app = app_at[prev_pos];

            swap(app_at[current_pos], app_at[prev_pos]);

            pos_of[launched_app] = prev_pos;
            pos_of[prev_app] = current_pos;
        }
    }

    cout << total_moves << endl;

    return 0;
}
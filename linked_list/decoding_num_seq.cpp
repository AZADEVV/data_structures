#include <iostream>
#include <vector>

int main() {
    using namespace std;

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int m;
    cin >> m;

    vector<int> b(m);
    int n = 0;
    for (int i = 0; i < m; ++i) {
        cin >> b[i];
        if (b[i] == -1) {
            n++;
        }
    }

    vector<vector<int>> sequences(n);
    
    vector<int> active_indices(n);
    for (int i = 0; i < n; ++i) {
        active_indices[i] = i;
    }

    int current_pos = 0;
    while (!active_indices.empty()) {
        vector<int> next_active;
        
        for (int idx : active_indices) {
            int val = b[current_pos++];
            
            if (val == -1) {
            } else {
                sequences[idx].push_back(val);
                next_active.push_back(idx);
            }
        }
        active_indices = next_active;
    }

    cout << n << "\n";
    for (int i = 0; i < n; ++i) {
        cout << sequences[i].size();
        for (int val : sequences[i]) {
            cout << " " << val;
        }
        cout << "\n";
    }

    return 0;
}
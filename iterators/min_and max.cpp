#include <iostream>
#include <vector>
#include <algorithm>


int main() {
    using namespace std;

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    int q;
    cin >> q;

    while (q--) {
        int type;
        cin >> type;

        if (type == 1) {
            int p, v;
            cin >> p >> v;
            a[p - 1] = v;
        } 
        else if (type == 2) {
            int left, right;
            cin >> left >> right;
            
            int min_val = a[left - 1];
            int min_idx = left;

            for (int i = left; i < right; ++i) {
                if (a[i] < min_val) {
                    min_val = a[i];
                    min_idx = i + 1;
                }
            }
            cout << min_val << " " << min_idx << "\n";
        } 
        else if (type == 3) {
            int left, right;
            cin >> left >> right;

            int max_val = a[left - 1];
            int max_idx = left;

            for (int i = left; i < right; ++i) {
                if (a[i] > max_val) {
                    max_val = a[i];
                    max_idx = i + 1;
                }
            }
            cout << max_val << " " << max_idx << "\n";
        }
    }

    return 0;
}
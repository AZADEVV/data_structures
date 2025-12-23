#include <iostream>
#include <vector>

int main() {
    using namespace std;

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<long long> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    int q;
    cin >> q;

    bool first_output = true;

    while (q--) {
        int type;
        cin >> type;

        if (type == 1) {
            int p;
            long long v;
            cin >> p >> v;
            a[p - 1] = v;
        }
        else if (type == 2) {
            int ls, lt, len;
            cin >> ls >> lt >> len;
            int src = ls - 1;
            int dst = lt - 1;

            if (src == dst) continue;

            if (dst < src) {
                for (int i = 0; i < len; ++i) {
                    a[dst + i] = a[src + i];
                }
            } else {
                for (int i = len - 1; i >= 0; --i) {
                    a[dst + i] = a[src + i];
                }
            }
        }
        else if (type == 3) {
            int l, r;
            cin >> l >> r;
            long long current_sum = 0;
            for (int i = l - 1; i < r; ++i) {
                current_sum += a[i];
            }

            if (!first_output) cout << " ";
            cout << current_sum;
            first_output = false;
        }
    }
    cout << endl;

    return 0;
}
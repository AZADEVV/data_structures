#include <iostream>
#include <vector>
#include <cmath>

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

    bool first_output = true;

    while (q--) {
        int type;
        cin >> type;

        if (type == 1) {
            int p, v;
            cin >> p >> v;
            a[p - 1] = v;
        } 
        else {
            int l, r;
            cin >> l >> r;
            int left = l - 1;
            int right = r - 1;

            int result = 0;

            if (type == 2) {
                int v;
                cin >> v;
                result = -1;
                for (int i = left; i <= right; ++i) {
                    if (a[i] == v) {
                        result = i + 1;
                        break;
                    }
                }
            } 
            else if (type == 3) {
                result = -1;
                for (int i = left; i <= right; ++i) {
                    if (a[i] % 7 == 0) {
                        result = i + 1;
                        break;
                    }
                }
            } 
            else if (type == 4) {
                int count = 0;
                for (int i = left; i <= right; ++i) {
                    if (abs(a[i]) % 10 >= 5) {
                        count++;
                    }
                }
                result = count;
            }

            if (!first_output) cout << " ";
            cout << result;
            first_output = false;
        }
    }
    cout << endl;

    return 0;
}
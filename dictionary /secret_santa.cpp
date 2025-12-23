#include <iostream>
#include <vector>

using namespace std;

int q[1000001];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    if (!(cin >> n)) return 0;

    for (int i = 1; i <= n; ++i) {
        int p_i;
        cin >> p_i;
        q[p_i] = i;
    }

    for (int i = 1; i <= n; ++i) {
        cout << q[i] << (i == n ? "" : " ");
    }
    cout << endl;

    return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> a;

void buildBalancedVLR(int left, int right) {
    if (left > right) return;

    int mid = left + (right - left + 1) / 2;

    cout << a[mid] << " ";

    buildBalancedVLR(left, mid - 1);

    buildBalancedVLR(mid + 1, right);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    if (!(cin >> n)) return 0;

    a.resize(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    buildBalancedVLR(0, n - 1);
    cout << endl;

    return 0;
}
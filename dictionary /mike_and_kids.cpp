#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int sum_counts[200001];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    if (!(cin >> n)) return 0;

    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            int current_sum = a[i] + a[j];
            sum_counts[current_sum]++;
        }
    }

    int max_kids = 0;
    for (int s = 0; s <= 200000; ++s) {
        if (sum_counts[s] > max_kids) {
            max_kids = sum_counts[s];
        }
    }

    cout << max_kids << endl;

    return 0;
}
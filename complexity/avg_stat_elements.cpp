#include <iostream>
#include <vector>

int main() {
    using namespace std;

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> a(n);
    long long total_sum = 0;

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        total_sum += a[i];
    }

    vector<int> result_indices;

    for (int i = 0; i < n; ++i) {
        if ((long long)a[i] * n == total_sum) {
            result_indices.push_back(i + 1);
        }
    }

    cout << result_indices.size() << "\n";
    for (int i = 0; i < result_indices.size(); ++i) {
        cout << result_indices[i] << (i == result_indices.size() - 1 ? "" : " ");
    }
    cout << endl;

    return 0;
}
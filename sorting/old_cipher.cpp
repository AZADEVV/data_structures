#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

long long get_reversed(long long n) {
    long long rev = 0;
    while (n > 0) {
        rev = rev * 10 + (n % 10);
        n /= 10;
    }
    return rev;
}

struct NumberInfo {
    int original_val;
    long long reversed_val;
    int index;
};

bool compareNumbers(const NumberInfo& a, const NumberInfo& b) {
    if (a.reversed_val != b.reversed_val) {
        return a.reversed_val < b.reversed_val;
    }
    return a.index > b.index;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    if (!(cin >> n)) return 0;

    vector<NumberInfo> data(n);
    for (int i = 0; i < n; ++i) {
        cin >> data[i].original_val;
        data[i].reversed_val = get_reversed(data[i].original_val);
        data[i].index = i;
    }

    sort(data.begin(), data.end(), compareNumbers);

    for (int i = 0; i < n; ++i) {
        cout << data[i].original_val << (i == n - 1 ? "" : " ");
    }
    cout << endl;

    return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Pair {
    int a;
    int b;
};

bool compare(const Pair& x, const Pair& y) {
    long long sumX = (long long)x.a + x.b;
    long long sumY = (long long)y.a + y.b;

    if (sumX != sumY) {
        return sumX < sumY;
    }
    return x.a < y.a;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    if (!(cin >> n)) return 0;

    vector<Pair> data(n);

    for (int i = 0; i < n; ++i) {
        cin >> data[i].a;
    }
    for (int i = 0; i < n; ++i) {
        cin >> data[i].b;
    }

    sort(data.begin(), data.end(), compare);

    for (int i = 0; i < n; ++i) {
        cout << data[i].a << (i == n - 1 ? "" : " ");
    }
    cout << "\n";

    for (int i = 0; i < n; ++i) {
        cout << data[i].b << (i == n - 1 ? "" : " ");
    }
    cout << endl;

    return 0;
}
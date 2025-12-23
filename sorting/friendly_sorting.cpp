#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Pair {
    int a;
    int b;
};

bool compare(const Pair& x, const Pair& y) {
    if (x.b != y.b) {
        return x.b > y.b;
    }
    return x.a > y.a;
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
    cout << endl;

    return 0;
}
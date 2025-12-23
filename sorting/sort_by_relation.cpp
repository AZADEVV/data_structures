#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Fraction {
    int a, b, id;
};

bool compareFractions(const Fraction& f1, const Fraction& f2) {
    long long prod1 = (long long)f1.a * f2.b;
    long long prod2 = (long long)f2.a * f1.b;

    if (prod1 != prod2) {
        return prod1 < prod2;
    }
    return f1.id < f2.id;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    if (!(cin >> n)) return 0;

    vector<Fraction> data(n);

    for (int i = 0; i < n; ++i) {
        cin >> data[i].a;
        data[i].id = i + 1;
    }
    for (int i = 0; i < n; ++i) {
        cin >> data[i].b;
    }

    sort(data.begin(), data.end(), compareFractions);

    for (int i = 0; i < n; ++i) {
        cout << data[i].id << (i == n - 1 ? "" : " ");
    }
    cout << endl;

    return 0;
}
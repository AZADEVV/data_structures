#include <iostream>
#include <vector>
#include <stack>


int main() {
    using namespace std;

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    if (!(cin >> n)) return 0;

    vector<int> a(n + 1);
    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
    }

    vector<int> L(n + 1), R(n + 1);
    stack<int> s;

    for (int i = 1; i <= n; ++i) {
        while (!s.empty() && a[s.top()] > a[i]) {
            s.pop();
        }
        if (s.empty()) {
            L[i] = 0;
        } else {
            L[i] = s.top();
        }
        s.push(i);
    }

    while (!s.empty()) s.pop();

    for (int i = n; i >= 1; --i) {
        while (!s.empty() && a[s.top()] < a[i]) {
            s.pop();
        }
        if (s.empty()) {
            R[i] = n + 1;
        } else {
            R[i] = s.top();
        }
        s.push(i);
    }

    for (int i = 1; i <= n; ++i) {
        cout << L[i] << (i == n ? "" : " ");
    }
    cout << "\n";

    for (int i = 1; i <= n; ++i) {
        cout << R[i] << (i == n ? "" : " ");
    }
    cout << "\n";

    return 0;
}
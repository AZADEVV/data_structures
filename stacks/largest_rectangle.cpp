#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>


int main() {
    using namespace std;

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    if (!(cin >> n)) return 0;

    vector<long long> h(n + 1);
    for (int i = 1; i <= n; ++i) {
        cin >> h[i];
    }

    vector<int> L(n + 1), R(n + 1);
    stack<int> s;

    for (int i = 1; i <= n; ++i) {
        while (!s.empty() && h[s.top()] >= h[i]) {
            s.pop();
        }
        L[i] = s.empty() ? 0 : s.top();
        s.push(i);
    }

    while (!s.empty()) s.pop();

    for (int i = n; i >= 1; --i) {
        while (!s.empty() && h[s.top()] >= h[i]) {
            s.pop();
        }
        R[i] = s.empty() ? n + 1 : s.top();
        s.push(i);
    }

    long long max_area = 0;
    for (int i = 1; i <= n; ++i) {
        long long current_area = h[i] * (R[i] - L[i] - 1);
        if (current_area > max_area) {
            max_area = current_area;
        }
    }

    cout << max_area << endl;

    return 0;
}
#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>

int main() {
    using namespace std;

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    vector<int> t(n, 0);
    stack<int> s;
    int max_time = 0;

    for (int i = 0; i < n; ++i) {
        int current_death_time = 0;
        while (!s.empty() && a[s.top()] < a[i]) {
            current_death_time = max(current_death_time, t[s.top()]);
            s.pop();
        }
        if (s.empty()) {
            t[i] = 0;
        } else {
            t[i] = current_death_time + 1;
        }
        if (s.empty()) t[i] = 0;
        
        s.push(i);
        max_time = max(max_time, t[i]);
    }

    cout << max_time << endl;

    return 0;
}
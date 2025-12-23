#include <iostream>
#include <vector>
#include <deque>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    if (!(cin >> n >> k)) return 0;

    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    deque<int> dq;
    bool first = true;

    for (int i = 0; i < n; ++i) {
        while (!dq.empty() && a[dq.back()] <= a[i]) {
            dq.pop_back();
        }
        
        dq.push_back(i);

        if (dq.front() <= i - k) {
            dq.pop_front();
        }

        if (i >= k - 1) {
            if (!first) cout << " ";
            cout << a[dq.front()];
            first = false;
        }
    }
    cout << endl;

    return 0;
}
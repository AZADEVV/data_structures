#include <iostream>
#include <queue>

int main() {
    using namespace std;

    int n, m;
    cin >> n >> m;

    queue<pair<int, int>> q;
    for (int i = 1; i <= n; ++i) {
        int a;
        cin >> a;
        q.push({a, i});
    }

    int last_child = 0;
    while (!q.empty()) {
        pair<int, int> current = q.front();
        q.pop();
        
        last_child = current.second;

        if (current.first > m) {
            q.push({current.first - m, current.second});
        }
    }

    cout << last_child << endl;
    return 0;
}
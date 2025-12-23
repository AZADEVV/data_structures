#include <iostream>
#include <vector>
#include <queue>

int main() {
    using namespace std;

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int q;
    if (!(cin >> q)) return 0;

    priority_queue<int, vector<int>, greater<int>> pq;

    for (int i = 0; i < q; ++i) {
        int type;
        cin >> type;

        if (type == 1) {
            int v;
            cin >> v;
            pq.push(v);
        } else {
            if (!pq.empty()) {
                pq.pop();
            }
        }

        if (pq.empty()) {
            cout << -1;
        } else {
            cout << pq.top();
        }

        if (i < q - 1) cout << " ";
    }
    cout << endl;

    return 0;
}
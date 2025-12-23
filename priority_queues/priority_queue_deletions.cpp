#include <iostream>
#include <queue>
#include <vector>

using namespace std;

priority_queue<int, vector<int>, greater<int>> pq_main;
priority_queue<int, vector<int>, greater<int>> pq_deleted;

void clean() {
    while (!pq_deleted.empty() && !pq_main.empty() && pq_main.top() == pq_deleted.top()) {
        pq_main.pop();
        pq_deleted.pop();
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int q;
    if (!(cin >> q)) return 0;

    for (int i = 0; i < q; ++i) {
        int type;
        cin >> type;

        if (type == 1) {
            int v;
            cin >> v;
            pq_main.push(v);
        } else if (type == 2) {
            clean();
            if (!pq_main.empty()) {
                pq_main.pop();
            }
        } else if (type == 3) {
            int v;
            cin >> v;
            pq_deleted.push(v);
        }

        clean();

        if (pq_main.empty()) {
            cout << -1;
        } else {
            cout << pq_main.top();
        }

        if (i < q - 1) cout << " ";
    }
    cout << "\n";

    return 0;
}
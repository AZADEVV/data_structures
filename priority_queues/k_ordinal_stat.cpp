#include <iostream>
#include <vector>
#include <queue>

int main() {
    using namespace std;

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int q, k;
    if (!(cin >> q >> k)) return 0;

    priority_queue<int> L;
    priority_queue<int, vector<int>, greater<int>> R;

    for (int i = 0; i < q; ++i) {
        int type;
        cin >> type;

        if (type == 1) {
            int v;
            cin >> v;
            if (L.size() < k) {
                L.push(v);
            } else {
                if (v < L.top()) {
                    R.push(L.top());
                    L.pop();
                    L.push(v);
                } else {
                    R.push(v);
                }
            }
        } else {
            if (!L.empty()) {
                if (L.size() < k) {
                    L.pop();
                } else {
                    L.pop();
                    if (!R.empty()) {
                        L.push(R.top());
                        R.pop();
                    }
                }
            }
        }

        if (L.empty()) {
            cout << -1;
        } else {
            cout << L.top();
        }
        
        if (i < q - 1) cout << " ";
    }
    cout << endl;

    return 0;
}
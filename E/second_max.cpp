#include <bits/stdc++.h>

int main() {
    using namespace std;

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int q; cin >> q;

    priority_queue<int> pq;
    string result = "";

    for (int i = 0; i < q; i++) {
        int type; cin >> type;

        if (type == 1) {
            int v; cin >> v;
            pq.push(v);
        }
        else if (type == 2) {
            if (pq.size() < 2) {
            } else {
                int first_max = pq.top();
                pq.pop();
                pq.pop();
                pq.push(first_max);
            }
        }

        if (pq.empty()) {
            result += "-1 ";
        } else {
            result += to_string(pq.top()) + " ";
        }
    }

    cout << result << "\n";

    return 0;
}
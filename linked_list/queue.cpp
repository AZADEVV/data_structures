#include <bits/stdc++.h>

int main() {
    using namespace std;

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    unordered_map<int, int> next;
    next.reserve(n * 2);

    int first = -1;

    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;

        if (a == 0) {
            first = b == 0 ? -1 : b;
            first = (b == 0 ? i : first);
        }

        if (a != 0) {
            next[a] = b;
        }
    }

    unordered_set<int> hasPrev;
    for (auto &p : next) {
        hasPrev.insert(p.second);
    }

    for (auto &p : next) {
        if (!hasPrev.count(p.first)) {
            first = p.first;
            break;
        }
    }

    vector<int> answer;
    int cur = first;
    while (cur != 0) {
        answer.push_back(cur);
        if (!next.count(cur)) break;
        cur = next[cur];
    }

    for (int x : answer) {
        cout << x << " ";
    }
    cout << "\n";

    return 0;
}

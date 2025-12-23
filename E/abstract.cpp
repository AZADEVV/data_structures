#include <bits/stdc++.h>

int main() {
    using namespace std;

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;

    unordered_map<string, string> best;
    best.reserve(n);

    for (int i = 0; i < n; i++) {
        string first, second;
        cin >> first >> second;

        if (second.size() < first.size()) {
            best[first] = second;
        } else {
            best[first] = first;
        }
    }

    int q; cin >> q;

    while (q--) {
        string word;
        cin >> word;
        cout << best[word] << " ";
    }

    return 0;
}


#include <bits/stdc++.h>

int main() {
    using namespace std;

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;

    vector<int> A(n);
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    unordered_map<int, int> freq;
    freq.reserve(n);

    for (int x : A) {
        freq[x]++;
    }

    unordered_map<int, int> count_freq;
    count_freq.reserve(freq.size());

    for (auto &p : freq) {
        int Y = p.second;
        count_freq[Y]++;
    }

    vector<pair<int,int>> result(count_freq.begin(), count_freq.end());
    sort(result.begin(), result.end());

    for (auto &p : result) {
        cout << p.first << " " << p.second << "\n";
    }

    return 0;
}



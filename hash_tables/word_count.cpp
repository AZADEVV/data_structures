#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    if (!(cin >> n)) return 0;

    unordered_map<string, int> word_counts;

    word_counts.reserve(n);

    for (int i = 0; i < n; ++i) {
        string s;
        cin >> s;
        word_counts[s]++;
    }

    for (const auto& pair : word_counts) {
        cout << pair.first << " " << pair.second << "\n";
    }

    return 0;
}
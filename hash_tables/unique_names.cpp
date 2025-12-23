#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    if (!(cin >> n)) return 0;

    unordered_map<string, int> counts;
    
    counts.reserve(n);

    for (int i = 0; i < n; ++i) {
        string s;
        cin >> s;

        if (counts[s] == 0) {
            cout << s << "\n";
        } else {
            cout << s << counts[s] << "\n";
        }
        
        counts[s]++;
    }

    return 0;
}
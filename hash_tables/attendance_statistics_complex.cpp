#include <iostream>
#include <vector>
#include <string>
#include <unordered_set>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    if (!(cin >> n)) return 0;

    vector<string> logs(n);
    unordered_set<string> seen;
    seen.reserve(n / 2);

    int k = 0;

    for (int i = 0; i < n; ++i) {
        cin >> logs[i];
        string name = logs[i].substr(1);
        
        if (seen.find(name) == seen.end()) {
            if (logs[i][0] == '-') {
                k++;
            }
            seen.insert(name);
        }
    }

    int current_visitors = k;
    int max_visitors = k;

    for (int i = 0; i < n; ++i) {
        if (logs[i][0] == '+') {
            current_visitors++;
        } else {
            current_visitors--;
        }
        
        if (current_visitors > max_visitors) {
            max_visitors = current_visitors;
        }
    }

    cout << max_visitors << endl;

    return 0;
}
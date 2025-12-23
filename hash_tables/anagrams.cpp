#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <unordered_map>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    if (!(cin >> n)) return 0;

    unordered_map<string, vector<int>> groups;

    for (int i = 1; i <= n; ++i) {
        string s;
        cin >> s;
        
        string sorted_s = s;
        sort(sorted_s.begin(), sorted_s.end());
        
        groups[sorted_s].push_back(i);
    }

    cout << groups.size() << "\n";

    for (const auto& pair : groups) {
        const vector<int>& indices = pair.second;
        cout << indices.size() << "\n";
        for (int j = 0; j < indices.size(); ++j) {
            cout << indices[j] << (j == indices.size() - 1 ? "" : " ");
        }
        cout << "\n";
    }

    return 0;
}
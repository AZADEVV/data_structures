#include <iostream>
#include <vector>
#include <string>
#include <unordered_set>

int main() {
    using namespace std;

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    if (!(cin >> n)) return 0;

    vector<string> messages(n);
    for (int i = 0; i < n; ++i) {
        cin >> messages[i];
    }

    unordered_set<string> shown;

    for (int i = n - 1; i >= 0; --i) {
        if (shown.find(messages[i]) == shown.end()) {
            cout << messages[i] << "\n";
            shown.insert(messages[i]);
        }
    }

    return 0;
}
#include <iostream>
#include <string>
#include <vector>


int main() {
    using namespace std;

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    if (!(cin >> s)) return 0;

    int n = s.length();

    for (int i = 0; i < n; ++i) {
        if (s[i] == 'r') {
            cout << i + 1 << "\n";
        }
    }

    for (int i = n - 1; i >= 0; --i) {
        if (s[i] == 'l') {
            cout << i + 1 << "\n";
        }
    }

    return 0;
}
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
    int start = -1;

    for (int i = 0; i < n; ++i) {
        if (s[i] != 'a') {
            start = i;
            break;
        }
    }

    if (start == -1) {
        s[n - 1] = 'z';
    } else {
        for (int i = start; i < n; ++i) {
            if (s[i] == 'a') {
                break;
            }
            s[i] = s[i] - 1;
        }
    }

    cout << s << endl;

    return 0;
}
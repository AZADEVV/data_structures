#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

int main() {
    using namespace std;

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    if (!(cin >> s)) return 0;

    string result = "";
    char max_char = 0;

    for (int i = s.length() - 1; i >= 0; --i) {
        if (s[i] >= max_char) {
            result += s[i];
            max_char = s[i];
        }
    }

    reverse(result.begin(), result.end());

    cout << result << endl;

    return 0;
}
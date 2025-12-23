#include <iostream>
#include <string>
#include <vector>

using namespace std;

int cnt[17576];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    if (!(cin >> s)) return 0;

    int n = s.length();
    if (n < 3) return 0;

    for (int i = 0; i <= n - 3; ++i) {
        int code = (s[i] - 'a') * 26 * 26 + 
                   (s[i+1] - 'a') * 26 + 
                   (s[i+2] - 'a');
        cnt[code]++;
    }

    int k = 0;
    for (int i = 0; i < 17576; ++i) {
        if (cnt[i] > 0) k++;
    }

    cout << k << "\n";
    for (int i = 0; i < 17576; ++i) {
        if (cnt[i] > 0) {
            char c3 = (i % 26) + 'a';
            char c2 = ((i / 26) % 26) + 'a';
            char c1 = (i / (26 * 26)) + 'a';
            
            cout << c1 << c2 << c3 << " " << cnt[i] << "\n";
        }
    }

    return 0;
}
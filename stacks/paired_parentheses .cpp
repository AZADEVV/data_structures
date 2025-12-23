#include <iostream>
#include <vector>
#include <string>
#include <stack>

using namespace std;

int match[2000005];

void solve() {
    string s;
    cin >> s;
    int n = s.length();
    
    stack<int> st;
    
    for (int i = 0; i < n; ++i) {
        if (s[i] == '(') {
            st.push(i + 1);
        } else {
            int open_pos = st.top();
            st.pop();
            match[open_pos] = i + 1;
        }
    }
    
    for (int i = 1; i <= n; ++i) {
        if (s[i-1] == '(') {
            cout << i << " " << match[i] << "\n";
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        solve();
    }
    
    return 0;
}
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    if (!(cin >> s)) return 0;

    vector<char> st;
    int moves = 0;

    for (char c : s) {
        if (!st.empty() && st.back() == c) {
            st.pop_back();
            moves++;
        } else {
            st.push_back(c);
        }
    }

    if (moves % 2 != 0) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
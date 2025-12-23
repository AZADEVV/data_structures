#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool is_pair(char open, char close) {
    if (open == '(' && close == ')') return true;
    if (open == '[' && close == ']') return true;
    if (open == '{' && close == '}') return true;
    if (open == '<' && close == '>') return true;
    return false;
}

bool is_open(char c) {
    return (c == '(' || c == '[' || c == '{' || c == '<');
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    if (!(cin >> s)) return 0;

    vector<char> stack;
    long long replacements = 0;

    for (char c : s) {
        if (is_open(c)) {
            stack.push_back(c);
        } else {
            if (stack.empty()) {
                cout << "Impossible" << endl;
                return 0;
            }

            char top = stack.back();
            stack.pop_back();

            if (!is_pair(top, c)) {
                replacements++;
            }
        }
    }

    if (!stack.empty()) {
        cout << "Impossible" << endl;
    } else {
        cout << replacements << endl;
    }

    return 0;
}
#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

vector<string> split(const string &s, char delimiter) {
    vector<string> tokens;
    string token;
    istringstream tokenStream(s);
    while (getline(tokenStream, token, delimiter)) {
        if (!token.empty()) {
            tokens.push_back(token);
        }
    }
    return tokens;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<string> current_path;

    while (n--) {
        string cmd;
        cin >> cmd;

        if (cmd == "pwd") {
            cout << "/";
            for (const string &dir : current_path) {
                cout << dir << "/";
            }
            cout << "\n";
        }
        else if (cmd == "cd") {
            string path;
            cin >> path;

            if (path[0] == '/') {
                current_path.clear();
            }

            vector<string> parts = split(path, '/');
            for (const string &part : parts) {
                if (part == "..") {
                    if (!current_path.empty()) {
                        current_path.pop_back();
                    }
                } else {
                    current_path.push_back(part);
                }
            }
        }
    }

    return 0;
}
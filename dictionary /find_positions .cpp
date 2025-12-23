#include <iostream>
#include <vector>

using namespace std;

vector<int> pos[1000001];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    if (!(cin >> n)) return 0;

    for (int i = 1; i <= n; ++i) {
        int x;
        cin >> x;
        pos[x].push_back(i);
    }

    for (int x = 1; x <= 1000000; ++x) {
        if (!pos[x].empty()) {
            cout << x << " " << pos[x].size() << "\n";
            
            for (int j = 0; j < pos[x].size(); ++j) {
                cout << pos[x][j] << (j == pos[x].size() - 1 ? "" : " ");
            }
            cout << "\n";
        }
    }

    return 0;
}
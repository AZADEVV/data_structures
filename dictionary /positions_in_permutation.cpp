#include <iostream>
#include <vector>

using namespace std;

int pos[200005];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    if (!(cin >> n)) return 0;

    for (int i = 1; i <= n; ++i) {
        int val;
        cin >> val;
        pos[val] = i; 
    }

    int q;
    cin >> q;

    while (q--) {
        int a, b;
        cin >> a >> b;

        if (pos[a] < pos[b]) {
            cout << "First\n";
        } else {
            cout << "Second\n";
        }
    }

    return 0;
}
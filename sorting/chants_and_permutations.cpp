#include <iostream>
#include <vector>

int main() {
    using namespace std;

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    if (!(cin >> n)) return 0;

    vector<int> p(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> p[i];
    }

    vector<bool> visited(n + 1, false);
    int cycles = 0;

    for (int i = 1; i <= n; i++) {
        if (!visited[i]) {
            cycles++;
            int current = i;
            while (!visited[current]) {
                visited[current] = true;
                current = p[current];
            }
        }
    }

    if ((n - cycles) % 2 == (3 * n) % 2) {
        cout << "Petr" << endl;
    } else {
        cout << "Um_nik" << endl;
    }

    return 0;
}
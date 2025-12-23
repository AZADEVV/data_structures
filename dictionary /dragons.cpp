#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Dragon {
    int strength;
    int bonus;
};

bool compareDragons(const Dragon& a, const Dragon& b) {
    return a.strength < b.strength;
}

int main() {
    int s, n;
    if (!(cin >> s >> n)) return 0;

    vector<Dragon> dragons(n);
    for (int i = 0; i < n; ++i) {
        cin >> dragons[i].strength >> dragons[i].bonus;
    }

    sort(dragons.begin(), dragons.end(), compareDragons);

    bool can_win = true;
    for (int i = 0; i < n; ++i) {
        if (s > dragons[i].strength) {
            s += dragons[i].bonus;
        } else {
            can_win = false;
            break;
        }
    }

    if (can_win) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
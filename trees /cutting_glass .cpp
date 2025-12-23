#include <iostream>
#include <set>
#include <algorithm>

using namespace std;

struct Dimension {
    set<int> cuts;
    multiset<int> lengths;

    Dimension(int size) {
        cuts.insert(0);
        cuts.insert(size);
        lengths.insert(size);
    }

    void add_cut(int p) {
        auto it_up = cuts.lower_bound(p);
        auto it_low = prev(it_up);

        int left = *it_low;
        int right = *it_up;

        lengths.erase(lengths.find(right - left));

        lengths.insert(p - left);
        lengths.insert(right - p);

        cuts.insert(p);
    }

    long long get_max() {
        return *lengths.rbegin();
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int w, h, n;
    if (!(cin >> w >> h >> n)) return 0;

    Dimension width(w), height(h);

    for (int i = 0; i < n; ++i) {
        char type;
        int coord;
        cin >> type >> coord;

        if (type == 'V') {
            width.add_cut(coord);
        } else {
            height.add_cut(coord);
        }

        cout << width.get_max() * height.get_max() << "\n";
    }

    return 0;
}
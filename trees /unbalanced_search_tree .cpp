#include <iostream>
#include <vector>
#include <set>
#include <map>

using namespace std;

bool has_left[200005];
bool has_right[200005];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    if (!(cin >> n)) return 0;

    set<int> tree_nodes;
    vector<int> parents(n);

    for (int i = 0; i < n; ++i) {
        int v;
        cin >> v;

        if (i == 0) {
            parents[i] = 0;
            tree_nodes.insert(v);
            continue;
        }

        auto it = tree_nodes.lower_bound(v);
        
        int p;
        if (it != tree_nodes.end() && !has_left[*it]) {
            p = *it;
            has_left[p] = true;
        } else {
            --it;
            p = *it;
            has_right[p] = true;
        }

        parents[i] = p;
        tree_nodes.insert(v);
    }

    for (int i = 0; i < n; ++i) {
        cout << parents[i] << (i == n - 1 ? "" : " ");
    }
    cout << endl;

    return 0;
}
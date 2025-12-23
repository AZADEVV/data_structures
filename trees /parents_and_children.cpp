#include <iostream>
#include <vector>

using namespace std;

int p[1005], l[1005], r[1005];
int n, q, root = 1;
bool first_out = true;

void inorder(int u) {
    if (!u) return;
    inorder(l[u]);
    if (!first_out) cout << " ";
    cout << u;
    first_out = false;
    inorder(r[u]);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    if (!(cin >> n >> q)) return 0;

    for (int i = 1; i <= n; ++i) {
        if (2 * i <= n) {
            l[i] = 2 * i;
            p[2 * i] = i;
        }
        if (2 * i + 1 <= n) {
            r[i] = 2 * i + 1;
            p[2 * i + 1] = i;
        }
    }
    p[1] = 0;

    while (q--) {
        int v;
        cin >> v;
        if (p[v] == 0) continue;

        int p_node = p[v];
        int pp_node = p[p_node];

        p[v] = pp_node;
        if (pp_node != 0) {
            if (l[pp_node] == p_node) l[pp_node] = v;
            else r[pp_node] = v;
        } else {
            root = v;
        }

        if (l[p_node] == v) {
            int vl_of_v = l[v];
            l[p_node] = vl_of_v;
            if (vl_of_v) p[vl_of_v] = p_node;

            l[v] = p_node;
            p[p_node] = v;
        } else {
            int vr_of_v = r[v];
            r[p_node] = vr_of_v;
            if (vr_of_v) p[vr_of_v] = p_node;

            r[v] = p_node;
            p[p_node] = v;
        }
    }

    inorder(root);
    cout << endl;

    return 0;
}
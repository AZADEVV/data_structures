#include <iostream>
#include <vector>


int main() {
    using namespace std;

    int L[1000005];
    int R[1000005];
    int P[1000005];

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    if (!(cin >> n)) return 0;

    for (int i = 0; i <= n; ++i) {
        cin >> P[i];
    }

    for (int i = 0; i <= n; ++i) {
        int current = P[i];
        int prev = P[(i - 1 + (n + 1)) % (n + 1)];
        int next = P[(i + 1) % (n + 1)];
        
        L[current] = prev;
        R[current] = next;
    }

    for (int i = 0; i < n; ++i) {
        int child;
        cin >> child;

        int left_neighbor = L[child];
        int right_neighbor = R[child];

        cout << left_neighbor << " " << right_neighbor << "\n";

        R[left_neighbor] = right_neighbor;
        L[right_neighbor] = left_neighbor;
    }

    return 0;
}
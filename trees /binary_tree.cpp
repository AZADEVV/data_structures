#include <iostream>

using namespace std;

void inOrder(int v, int n) {
    if (2 * v <= n) {
        inOrder(2 * v, n);
    }

    cout << v << " ";

    if (2 * v + 1 <= n) {
        inOrder(2 * v + 1, n);
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    if (!(cin >> n)) return 0;

    inOrder(1, n);
    
    cout << endl;

    return 0;
}
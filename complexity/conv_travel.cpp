#include <iostream>
#include <algorithm>

int main() {
    using namespace std;

    int n, m, a, b;
    cin >> n >> m >> a >> b;

    int cost1 = n * a;

    int cost2 = (n / m) * b + (n % m) * a;

    int cost3 = ((n + m - 1) / m) * b;

    cout << min({cost1, cost2, cost3}) << endl;

    return 0;
}
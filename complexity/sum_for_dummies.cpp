#include <iostream>

int main() {
    using namespace std;

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    if (!(cin >> n)) return 0;

    while (n--) {
        long long a, ya;
        cin >> a >> ya;

        long long count = ya - a + 1;

        long long sum = (a + ya) * count / 2;

        cout << sum << "\n";
    }

    return 0;
}
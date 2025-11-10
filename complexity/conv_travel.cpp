#include <iostream>

int main() {
    using namespace std;

    int n, m, a, b, count = 0;
    cin >> n >> m >> a >> b;

    // cout << n / a << endl;


    while (n > 0) {
        n = n - m;

        count += b;
        cout << count << endl;
    }

    cout << n << endl;

    return 0;
}
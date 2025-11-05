// #include <cmath>
// #include <iostream>
//
// int main()
// {
//     using namespace std;
//
//     int n, f;
//
//     cin >> n;
//
//     for (int i = 1; i <= n; i++) {
//         f += pow(-1, i) * i;
//     }
//
//     cout << f << endl;
// }

#include <iostream>

int main() {
    using namespace std;

    long long n;
    cin >> n;

    if (n % 2 == 0)
        cout << n / 2;
    else
        cout << -(n + 1) / 2;

    return 0;
}

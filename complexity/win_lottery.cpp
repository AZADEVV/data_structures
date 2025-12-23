    // #include <iostream>
//
// int main() {
//     using namespace std;
//
//     long long n, min = 0;
//     int bills[] = {100, 20, 10, 5, 1};
//     for (int v : bills) {
//         min += n / v;
//         n %= v;
//     }
//
//     cout << min << endl;
//
//     return 0;
// }

#include <iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;

    int min = 0;

    min += n / 100;
    n %= 100;

    min += n / 20;
    n %= 20;

    min += n / 10;
    n %= 10;

    min += n / 5;
    n %= 5;

    min += n;

    cout << min << endl;

    return 0;
}

#include <iostream>

int main() {
    using namespace std;

    long long n;
    int min = 0;
    int bills[] = {100, 20, 10, 5, 1};
    for (const int v : bills) {
        min += n / v;
        n %= v;
    }

    cout << min << endl;

    return 0;
}


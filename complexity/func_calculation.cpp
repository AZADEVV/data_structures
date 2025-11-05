#include <cmath>
#include <iostream>

int main()
{
    using namespace std;

    int n, f;

    cin >> n;

    for (int i = 1; i <= n; i++) {
        f += pow(-1, i) * i;
    }

    cout << f << endl;
}
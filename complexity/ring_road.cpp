#include <bits/stdc++.h>

int main() {
    using namespace std;

    long long n, m;
    cin >> n >> m;

    long long cur = 1;
    long long time = 0;

    for (int i = 0; i < m; i++) {
        long long a;
        cin >> a;
        if (a >= cur)
            time += a - cur;
        else
            time += n - (cur - a);
        cur = a;
    }

    cout << time << endl;

    return 0;
}

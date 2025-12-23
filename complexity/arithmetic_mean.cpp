#include <iostream>
#include <iomanip>

int main() {
    using namespace std;

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int q;
    cin >> q;

    long long current_sum = 0;
    long long current_count = 0;

    cout << fixed << setprecision(10);

    for (int i = 0; i < q; ++i) {
        char op;
        long long x;
        cin >> op >> x;

        if (op == '+') {
            current_sum += x;
            current_count++;
        } else {
            current_sum -= x;
            current_count--;
        }

        if (current_count == 0) {
            cout << 0.0 << "\n";
        } else {
            double average = (double)current_sum / current_count;
            cout << average << "\n";
        }
    }

    return 0;
}
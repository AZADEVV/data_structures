#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    if (!(cin >> n)) return 0;

    int current_count = 0;
    int max_count = 0;

    for (int i = 0; i < n; ++i) {
        string record;
        cin >> record;

        if (record[0] == '+') {
            current_count++;
        } else {
            current_count--;
        }

        if (current_count > max_count) {
            max_count = current_count;
        }
    }

    cout << max_count << endl;

    return 0;
}
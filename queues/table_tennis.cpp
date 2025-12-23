#include <iostream>
#include <vector>
#include <deque>
#include <algorithm>


int main() {
    using namespace std;

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    long long k;
    cin >> n >> k;

    deque<int> q;
    int max_power = 0;
    for (int i = 0; i < n; ++i) {
        int power;
        cin >> power;
        q.push_back(power);
        max_power = max(max_power, power);
    }

    if (k >= n - 1) {
        cout << max_power << endl;
        return 0;
    }

    int current_winner = q.front();
    q.pop_front();
    int wins = 0;

    while (wins < k) {
        int challenger = q.front();
        q.pop_front();

        if (current_winner > challenger) {
            wins++;
            q.push_back(challenger);
        } else {
            q.push_back(current_winner);
            current_winner = challenger;
            wins = 1;
        }

        if (current_winner == max_power) {
            break;
        }
    }

    cout << current_winner << endl;

    return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct ValCount {
    int val;
    int count;
};

bool compareByVal(const ValCount& a, const ValCount& b) {
    return a.val < b.val;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n;
    int k;
    if (!(cin >> n >> k)) return 0;

    vector<ValCount> pairs(k);
    for (int i = 0; i < k; ++i) {
        cin >> pairs[i].val >> pairs[i].count;
    }

    sort(pairs.begin(), pairs.end(), compareByVal);

    long long current_pos = 0;
    long long next_target = 1000;

    bool first = true;
    for (int i = 0; i < k; ++i) {
        long long range_end = current_pos + pairs[i].count;

        while (next_target <= range_end) {
            if (!first) cout << " ";
            cout << pairs[i].val;
            first = false;
            
            next_target += 1000;
        }
        
        current_pos = range_end;
    }
    cout << endl;

    return 0;
}
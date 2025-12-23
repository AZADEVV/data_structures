#include <iostream>
#include <vector>
#include <map>
#include <set>

using namespace std;

const int MAXID = 1000001;
int next_id[MAXID];
int count_in[MAXID];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> a(n), b(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i] >> b[i];
        next_id[a[i]] = b[i];
        if (b[i] != 0) {
            count_in[b[i]]++;
        }
    }

    int first = 0;
    for (int i = 0; i < n; ++i) {
        if (a[i] != 0 && count_in[a[i]] == 0) {
            first = a[i];
            break;
        }
    }

    vector<int> result(n + 1);

    int curr = first;
    for (int i = 1; i <= n; i += 2) {
        result[i] = curr;
        curr = next_id[curr];
    }

    curr = next_id[0];
    for (int i = 2; i <= n; i += 2) {
        result[i] = curr;
        curr = next_id[curr];
    }

    for (int i = 1; i <= n; ++i) {
        cout << result[i] << (i == n ? "" : " ");
    }
    cout << endl;

    return 0;
}
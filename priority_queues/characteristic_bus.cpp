#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>

using namespace std;

struct Row {
    int width;
    int id;
};

bool compareRows(const Row& a, const Row& b) {
    return a.width < b.width;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<Row> rows(n);
    for (int i = 0; i < n; ++i) {
        cin >> rows[i].width;
        rows[i].id = i + 1;
    }

    sort(rows.begin(), rows.end(), compareRows);

    string s;
    cin >> s;

    stack<int> half_full_rows;
    int next_empty_row = 0;

    for (int i = 0; i < 2 * n; ++i) {
        if (s[i] == '0') {
            int current_id = rows[next_empty_row].id;
            cout << current_id << " ";
            
            half_full_rows.push(current_id);
            next_empty_row++;
        } else {
            int current_id = half_full_rows.top();
            half_full_rows.pop();
            cout << current_id << " ";
        }
    }

    cout << endl;
    return 0;
}
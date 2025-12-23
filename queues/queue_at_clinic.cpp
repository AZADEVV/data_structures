#include <iostream>
#include <deque>
#include <vector>

int main() {
    using namespace std;

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int q;
    cin >> q;

    deque<int> left, right;
    vector<int> results;

    while (q--) {
        int type;
        cin >> type;

        if (type == 1) {
            char s;
            int v;
            cin >> s >> v;
            if (s == 'b') {
                right.push_back(v);
            } else {
                right.push_front(v);
            }
        } else {
            if (left.empty() && right.empty()) {
                results.push_back(-1);
            } else {
                if (!left.empty()) {
                    results.push_back(left.front());
                    left.pop_front();
                } else {
                    results.push_back(right.front());
                    right.pop_front();
                }
            }
        }

        if (right.size() > left.size() + 1) {
            left.push_back(right.front());
            right.pop_front();
        } else if (left.size() > right.size()) {
            right.push_front(left.back());
            left.pop_back();
        }
    }

    for (int i = 0; i < results.size(); ++i) {
        cout << results[i] << (i == results.size() - 1 ? "" : " ");
    }
    cout << endl;

    return 0;
}
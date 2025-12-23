#include <iostream>
#include <deque>

int main() {
    using namespace std;

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int q, k_val;
    if (!(cin >> q >> k_val)) return 0;

    deque<int> head, tail;
    bool first_output = true;

    for (int i = 0; i < q; ++i) {
        int type;
        cin >> type;

        if (type == 1) {
            char s;
            int v;
            cin >> s >> v;
            if (s == 'b') {
                tail.push_back(v);
            } else {
                if ((int)(head.size() + tail.size()) < k_val) {
                    tail.push_back(v);
                } else {
                    tail.push_front(v);
                }
            }
        } else {
            if (!first_output) cout << " ";
            first_output = false;

            if (head.empty() && tail.empty()) {
                cout << -1;
            } else {
                if (!head.empty()) {
                    cout << head.front();
                    head.pop_front();
                } else {
                    cout << tail.front();
                    tail.pop_front();
                }
            }
        }

        while ((int)head.size() < k_val - 1 && !tail.empty()) {
            head.push_back(tail.front());
            tail.pop_front();
        }
        while ((int)head.size() > k_val - 1) {
            tail.push_front(head.back());
            head.pop_back();
        }
    }
    cout << endl;

    return 0;
}
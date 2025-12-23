#include <iostream>
#include <deque>
#include <algorithm>


int main() {
    using namespace std;

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int q;
    cin >> q;

    deque<int> dq;
    bool first_out = true;

    auto print_res = [&](int val) {
        if (!first_out) cout << " ";
        cout << val;
        first_out = false;
    };

    while (q--) {
        int type;
        cin >> type;

        if (type == 1) {
            char s;
            int v;
            cin >> s >> v;
            if (s == 'f') dq.push_front(v);
            else dq.push_back(v);
        } 
        else if (type == 2) {
            char s;
            cin >> s;
            if (dq.empty()) {
                print_res(-1);
            } else {
                if (s == 'f') {
                    print_res(dq.front());
                    dq.pop_front();
                } else {
                    print_res(dq.back());
                    dq.pop_back();
                }
            }
        } 
        else if (type == 3) {
            int p, v;
            cin >> p >> v;
            dq.insert(dq.begin() + (p - 1), v);
        } 
        else if (type == 4) {
            int p;
            cin >> p;
            int val = dq[p - 1];
            dq.erase(dq.begin() + (p - 1));
            print_res(val);
        } 
        else if (type == 5) {
            int v;
            cin >> v;
            int pos = -1;
            for (int i = 0; i < dq.size(); ++i) {
                if (dq[i] == v) {
                    pos = i + 1;
                    break;
                }
            }
            print_res(pos);
        } 
        else if (type == 6) {
            int p;
            cin >> p;
            print_res(dq[p - 1]);
        }
    }
    cout << endl;

    return 0;
}
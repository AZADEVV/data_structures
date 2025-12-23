#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct StackElement {
    int val;
    int max_val;
};

struct MaxStack {
    vector<StackElement> data;

    void push(int v) {
        int current_max = data.empty() ? v : max(v, data.back().max_val);
        data.push_back({v, current_max});
    }

    void pop() {
        if (!data.empty()) data.pop_back();
    }

    int get_max() {
        return data.empty() ? -1 : data.back().max_val;
    }

    bool empty() {
        return data.empty();
    }

    int top_val() {
        return data.back().val;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int q;
    cin >> q;

    MaxStack s1, s2;
    bool first = true;

    while (q--) {
        int type;
        cin >> type;

        if (type == 1) {
            int v;
            cin >> v;
            s1.push(v);
        } else {
            if (s2.empty()) {
                while (!s1.empty()) {
                    s2.push(s1.top_val());
                    s1.pop();
                }
            }
            if (!s2.empty()) {
                s2.pop();
            }
        }

        int res_max = max(s1.get_max(), s2.get_max());
        
        if (!first) cout << " ";
        cout << res_max;
        first = false;
    }
    cout << endl;

    return 0;
}
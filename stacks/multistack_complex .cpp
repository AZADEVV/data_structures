#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Block {
    long long count;
    long long value;
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int q;
    cin >> q;

    vector<Block> stack;
    long long total_elements = 0;
    bool first_out = true;

    while (q--) {
        int type;
        cin >> type;

        if (type == 1) {
            long long x, v;
            cin >> x >> v;
            stack.push_back({x, v});
            total_elements += x;
        } 
        else {
            long long k;
            cin >> k;

            long long sum = 0;
            long long to_remove = min(total_elements, k);
            total_elements -= to_remove;

            while (to_remove > 0) {
                Block &top = stack.back();

                if (top.count <= to_remove) {
                    sum += top.count * top.value;
                    to_remove -= top.count;
                    stack.pop_back();
                } else {
                    sum += to_remove * top.value;
                    top.count -= to_remove;
                    to_remove = 0;
                }
            }

            if (!first_out) cout << " ";
            cout << sum;
            first_out = false;
        }
    }
    cout << endl;

    return 0;
}
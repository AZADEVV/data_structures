#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    using namespace std;

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int q;
    if (!(cin >> q)) return 0;

    vector<int> st;
    vector<int> min_st;
    bool first_out = true;

    while (q--) {
        int type;
        cin >> type;

        if (type == 1) {
            int v;
            cin >> v;
            st.push_back(v);
            if (min_st.empty()) {
                min_st.push_back(v);
            } else {
                min_st.push_back(min(v, min_st.back()));
            }
        } 
        else if (type == 2) {
            if (!st.empty()) {
                st.pop_back();
                min_st.pop_back();
            }
        }

        if (!first_out) cout << " ";
        
        if (st.empty()) {
            cout << -1;
        } else {
            cout << min_st.back();
        }
        first_out = false;
    }
    cout << endl;

    return 0;
}
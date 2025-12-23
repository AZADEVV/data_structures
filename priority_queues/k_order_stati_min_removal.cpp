#include <iostream>
#include <queue>
#include <vector>

using namespace std;

struct LazyHeap {
    priority_queue<int, vector<int>, less<int>> max_q;
    priority_queue<int, vector<int>, greater<int>> min_q;
    priority_queue<int, vector<int>, less<int>> del_max;
    priority_queue<int, vector<int>, greater<int>> del_min;
    int size = 0;

    void push(int v) {
        max_q.push(v);
        min_q.push(v);
        size++;
    }

    void erase(int v) {
        del_max.push(v);
        del_min.push(v);
        size--;
    }

    void clean() {
        while (!del_max.empty() && max_q.top() == del_max.top()) {
            max_q.pop(); del_max.pop();
        }
        while (!del_min.empty() && min_q.top() == del_min.top()) {
            min_q.pop(); del_min.pop();
        }
    }

    int top_max() { clean(); return max_q.top(); }
    int top_min() { clean(); return min_q.top(); }
    bool empty() { return size == 0; }
};

struct LazyMinHeap {
    priority_queue<int, vector<int>, greater<int>> q;
    priority_queue<int, vector<int>, greater<int>> del;
    int size = 0;

    void push(int v) { q.push(v); size++; }
    void erase(int v) { del.push(v); size--; }
    void clean() {
        while (!del.empty() && q.top() == del.top()) {
            q.pop(); del.pop();
        }
    }
    int top() { clean(); return q.top(); }
    bool empty() { return size == 0; }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int q, k;
    cin >> q >> k;

    LazyHeap L;
    LazyMinHeap R;
    priority_queue<int, vector<int>, greater<int>> global_min;

    for (int i = 0; i < q; ++i) {
        int type; cin >> type;
        if (type == 1) {
            int v; cin >> v;
            global_min.push(v);
            if (L.size < k) {
                L.push(v);
            } else if (v < L.top_max()) {
                int old_max = L.top_max();
                L.erase(old_max);
                L.push(v);
                R.push(old_max);
            } else {
                R.push(v);
            }
        } else {
            if (!global_min.empty()) {
                int m = global_min.top();
                global_min.pop();
                if (!L.empty() && m <= L.top_max()) {
                    L.erase(m);
                } else {
                    R.erase(m);
                }
            }
        }

        while (L.size < k && !R.empty()) {
            int v = R.top();
            R.erase(v);
            L.push(v);
        }

        if (L.empty()) cout << -1;
        else cout << L.top_max();
        
        if (i < q - 1) cout << " ";
    }
    cout << endl;

    return 0;
}
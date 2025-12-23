#include <iostream>
#include <vector>
#include <string>
#include <queue>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    priority_queue<int, vector<int>, greater<int>> pq;
    vector<string> result;

    for (int i = 0; i < n; ++i) {
        string op;
        cin >> op;

        if (op == "insert") {
            int x;
            cin >> x;
            pq.push(x);
            result.push_back("insert " + to_string(x));
        } 
        else if (op == "removeMin") {
            if (pq.empty()) {
                result.push_back("insert 0");
            } else {
                pq.pop();
            }
            result.push_back("removeMin");
        } 
        else if (op == "getMin") {
            int x;
            cin >> x;
            
            while (!pq.empty() && pq.top() < x) {
                pq.pop();
                result.push_back("removeMin");
            }
            
            if (pq.empty() || pq.top() > x) {
                pq.push(x);
                result.push_back("insert " + to_string(x));
            }
            
            result.push_back("getMin " + to_string(x));
        }
    }

    cout << result.size() << "\n";
    for (const string& s : result) {
        cout << s << "\n";
    }

    return 0;
}
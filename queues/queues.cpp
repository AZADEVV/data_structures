#include <iostream>
#include <queue>


int main() {
    using namespace std;

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int q;
    if (!(cin >> q)) return 0;

    queue<int> myQueue;
    bool isFirst = true;

    while (q--) {
        int type;
        cin >> type;

        if (type == 1) {
            int v;
            cin >> v;
            myQueue.push(v);
        }
        else if (type == 2) {
            if (!isFirst) cout << " ";
            isFirst = false;

            if (myQueue.empty()) {
                cout << -1;
            } else {
                cout << myQueue.front();
                myQueue.pop();
            }
        }
    }
    cout << endl;

    return 0;
}
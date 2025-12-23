#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>

int main() {
    using namespace std;

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int q;
    if (!(cin >> q)) return 0;

    unordered_map<string, string> current_to_start;

    for (int i = 0; i < q; ++i) {
        string old_log, new_log;
        cin >> old_log >> new_log;

        auto it = current_to_start.find(old_log);

        if (it != current_to_start.end()) {
            string start_log = it->second;
            current_to_start.erase(it);
            current_to_start[new_log] = start_log;
        } else {
            current_to_start[new_log] = old_log;
        }
    }

    cout << current_to_start.size() << "\n";

    for (const auto& pair : current_to_start) {
        cout << pair.second << " " << pair.first << "\n";
    }

    return 0;
}
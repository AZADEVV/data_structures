#include <iostream>
#include <vector>
#include <string>
#include <queue>
#include <map>
#include <algorithm>

using namespace std;

struct Node {
    char ch;
    long long freq;
    Node *left, *right;

    Node(char c, long long f) : ch(c), freq(f), left(nullptr), right(nullptr) {}
    Node(long long f, Node* l, Node* r) : ch(0), freq(f), left(l), right(r) {}
};

struct Compare {
    bool operator()(Node* l, Node* r) {
        return l->freq > r->freq;
    }
};

void buildCodes(Node* root, string str, map<char, string>& huffmanCode) {
    if (!root) return;

    if (!root->left && !root->right) {
        huffmanCode[root->ch] = (str == "" ? "0" : str);
    }

    buildCodes(root->left, str + "0", huffmanCode);
    buildCodes(root->right, str + "1", huffmanCode);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    if (!(cin >> s)) return 0;

    vector<long long> freq(256, 0);
    for (char c : s) freq[(unsigned char)c]++;

    priority_queue<Node*, vector<Node*>, Compare> pq;
    for (int i = 0; i < 256; i++) {
        if (freq[i] > 0) {
            pq.push(new Node((char)i, freq[i]));
        }
    }

    if (pq.empty()) return 0;

    cout << pq.size() << "\n";

    while (pq.size() > 1) {
        Node *left = pq.top(); pq.pop();
        Node *right = pq.top(); pq.pop();
        pq.push(new Node(left->freq + right->freq, left, right));
    }

    Node* root = pq.top();

    map<char, string> huffmanCode;
    buildCodes(root, "", huffmanCode);

    for (auto const& [ch, code] : huffmanCode) {
        cout << ch << " " << code << "\n";
    }

    for (char c : s) {
        cout << huffmanCode[c];
    }
    cout << endl;

    return 0;
}
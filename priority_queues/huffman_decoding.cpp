#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Node {
    char ch = 0;
    Node *left = nullptr, *right = nullptr;
};

void insert(Node* root, char c, const string& code) {
    Node* curr = root;
    for (char bit : code) {
        if (bit == '0') {
            if (!curr->left) curr->left = new Node();
            curr = curr->left;
        } else {
            if (!curr->right) curr->right = new Node();
            curr = curr->right;
        }
    }
    curr->ch = c;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int k;
    if (!(cin >> k)) return 0;

    Node* root = new Node();
    for (int i = 0; i < k; ++i) {
        char letter;
        string code;
        cin >> letter >> code;
        insert(root, letter, code);
    }

    string encoded;
    cin >> encoded;

    string decoded = "";
    Node* curr = root;

    for (char bit : encoded) {
        if (bit == '0') {
            curr = curr->left;
        } else {
            curr = curr->right;
        }

        if (curr->ch != 0) {
            decoded += curr->ch;
            curr = root;
        }
    }

    cout << decoded << endl;

    return 0;
}


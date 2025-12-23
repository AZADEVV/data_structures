#include <iostream>
#include <vector>

using namespace std;

struct Node {
    int value;
    Node* left;
    Node* right;

    Node(int v) : value(v), left(nullptr), right(nullptr) {}
};

Node* insert(Node* root, int v) {
    if (root == nullptr) {
        return new Node(v);
    }
    if (v < root->value) {
        root->left = insert(root->left, v);
    } else {
        root->right = insert(root->right, v);
    }
    return root;
}

void preOrder(Node* root, bool &first) {
    if (root == nullptr) return;

    if (!first) cout << " ";
    cout << root->value;
    first = false;

    preOrder(root->left, first);

    preOrder(root->right, first);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int q;
    if (!(cin >> q)) return 0;

    Node* root = nullptr;
    for (int i = 0; i < q; ++i) {
        int v;
        cin >> v;
        root = insert(root, v);
    }

    bool first = true;
    preOrder(root, first);
    cout << endl;

    return 0;
}
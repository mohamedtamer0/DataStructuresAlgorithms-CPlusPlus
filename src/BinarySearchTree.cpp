#include <iostream>

using namespace std;

class Node {
public:
    int data;
    Node *left, *right;

    Node(int value) {
        data = value;
        left = right = NULL;
    }
};


class BST {
public:
    Node *root;

    BST() {
        root = NULL;
    }

    Node *Insert(Node *r, int item) {
        if (r == NULL) {
            Node *newnode = new Node(item);
            r = newnode;
        } else if (item < r->data) {
            r->left = Insert(r->left, item);
        } else {
            r->right = Insert(r->right, item);
        }

        return r;
    }

    void Insert(int item) {
        root = Insert(root, item);
    }

    void Preorder(Node *r) { //root -> left -> right
        if (r == NULL) {
            return;
        }
        cout << r->data << "\t";
        Preorder(r->left);
        Preorder(r->right);
    }

    void Inorder(Node *r) { //left -> root -> right
        if (r == NULL) {
            return;
        }
        Inorder(r->left);
        cout << r->data << "\t";
        Inorder(r->right);
    }


    void Postorder(Node *r) { //left -> right -> root
        if (r == NULL) {
            return;
        }
        Postorder(r->left);
        Postorder(r->right);
        cout << r->data << "\t";
    }


};

int main() {

}
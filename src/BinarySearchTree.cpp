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
    // 45,15,79,90,10,55,12,20,50
    BST btree;
    btree.Insert(45);
    btree.Insert(15);
    btree.Insert(79);
    btree.Insert(90);
    btree.Insert(10);
    btree.Insert(55);
    btree.Insert(12);
    btree.Insert(20);
    btree.Insert(50);

    cout << "Display the Tree Content \n";
    btree.Preorder(btree.root);
    cout << "\n..............................................\n";
    btree.Inorder(btree.root);
    cout << "\n..............................................\n";
    btree.Postorder(btree.root);
    cout << "\n..............................................\n";

}
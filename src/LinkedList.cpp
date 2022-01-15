#include <iostream>

using namespace std;


class Node {
public:
    int data;
    Node *next;
};

class Linkedlist {
public:
    Node *head;

    Linkedlist() {
        head = NULL;
    }

    bool isempty() {
        return (head == NULL);
    }


    void InsertFirst(int newvalue) {
        Node *newnode;
        newnode->data = newvalue;
        if (isempty()) {
            newnode->next = NULL;
            head = newnode;
        } else {
            newnode->next = head;
            head = newnode;
        }
    }





};


int main() {

}
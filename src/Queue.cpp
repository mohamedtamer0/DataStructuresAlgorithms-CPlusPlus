#include <iostream>

using namespace std;

class Node {
public:
    int data;
    Node *next;

    Node() {
        data = 0;
        next = NULL;
    }
};


class Queue {
public:
    Node *front;
    Node *rear;

    Queue() {
        front = rear = NULL;
    }

    bool isEmpty() {
        return (front == NULL && rear == NULL);
    }


    void Enqueue(int item) {
        Node *newnode = new Node();
        newnode->data = item;

        if (isEmpty()) {
            front = rear = newnode;
        } else {
            rear->next = newnode;
            rear = newnode;
        }
    }

    void display() {
        Node *temp = front;
        while (temp != NULL) {
            cout << " " << temp->data;
            temp = temp->next;
        }
        cout << endl;
    }


};


int main() {
    Queue q;
    int item;

    for (int i = 1; i <= 3; i++) {
        cout << "Enter Item to Enqueue \n";
        cin >> item;
        q.Enqueue(item);
    }
    q.display();


}
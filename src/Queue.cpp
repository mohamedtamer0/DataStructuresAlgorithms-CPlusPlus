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


    int Dequeue() {
        int delvalue = -1;
        if (isEmpty()) {
            cout << "The queue is empty\n";
        } else if (front == rear) {
            delete front;
            front = rear = NULL;
        } else {
            Node *delptr = front;
            front = front->next;
            delvalue = delptr->data;
            delete delptr;
        }
        return delvalue;
    }

    int getFront() {
        return front->data;
    }

    int getRear() {
        return rear->data;
    }


    int count() {
        int counter = 0;
        Node *temp = front;
        while (temp != NULL) {
            counter++;
            temp = temp->next;
        }
        return counter;
    }

    bool isFound(int item) {
        bool found = false;
        Node *temp = front;
        while (temp != NULL) {
            if (temp->data == item) {
                found = true;
                temp = temp->next;
            }
        }
        return found;
    }


    void Clear() {
        while (!isEmpty()) {
            Dequeue();
        }
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


//    q.Dequeue();
//    cout << "After dequeue one \n";
//    q.display();
//    q.Dequeue();
//    cout << "After dequeue two \n";
//    q.display();

    cout << "Clear All items\n";
    q.Clear();
    cout << "Display after clear \n";
    q.display();


}
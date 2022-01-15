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


class Stack {
    Node *top;

public:
    Stack() {
        top = NULL;
    }

    bool isEmpty() {
        return (top == NULL);
    }

    void push(int item) {
        Node *newnode = new Node();
        newnode->data = item;
        if (isEmpty()) {
            newnode->next = NULL;
            top = newnode;
        } else {
            newnode->next = top;
            top = newnode;
        }
    }


    int pop() {
        int value;
        Node *delptr = top;
        value = top->data;
        top = top->next;
        delete delptr;
        return value;
    }


    int peek() {
        return top->data;
    }


    void display() {
        Node *temp = top;
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    int count() {
        int counter = 0;
        Node *temp = top;
        while (temp != NULL) {
            counter++;
            temp = temp->next;
        }
        return counter;
    }

    bool IsFound(int item) {
        bool found = false;
        Node *temp = top;
        while (temp != NULL) {
            if (temp->data == item) {
                found = true;
            }
            temp = temp->next;
        }
        return found;
    }


    bool isFull() {
        Node *ptr = new Node();
        if (ptr == NULL) {
            cout << "The Stack is Full, cannot add more items\n";
        }
    }


};


int main() {
    int item;
    Stack s;

    for (int i = 0; i < 3; i++) {
        cout << "Enter Item to push \n";
        cin >> item;
        s.push(item);
        s.display();
    }


    cout << s.pop() << " was delete from stack \n";
    s.display();

    cout << s.pop() << " was delete from stack \n";
    s.display();

    cout << "Enter Item to search for \n";
    cin >> item;
    if (s.IsFound(item)) {
        cout << "Is Found \n";
    } else {
        cout << "Not found \n";
    }
    cout << s.count() << endl;

}
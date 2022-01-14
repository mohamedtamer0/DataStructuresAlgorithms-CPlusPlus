#include <iostream>

using namespace std;

class Array {
private:
    int size;
    int length;
    int *items;
public:
    Array(int arrsize) {
        size = arrsize;
        length = 0;
        items = new int[arrsize];
    }

    void Fill() {
        int no_of_items;
        cout << "How many items you want to fill ? \n";
        cin >> no_of_items;
        if (no_of_items > size) {
            cout << "You cannot exceed the array size \n";
        } else {
            for (int i = 0; i < no_of_items; i++) {
                cout << "Enter item no" << i << endl;
                cin >> items[i];
                length++;
            }
        }
    }

    void Display() {
        cout << "Display Array content \n";
        for (int i = 0; i < length; i++) {
            cout << items[i] << "\t";
        }
        cout << endl;
    }

    int getSize() {
        return size;
    }

    int getLength() {
        return length;
    }
};


int main() {
    cout << "Hello This is Array ADT demo\n";
    int arraysize;
    cout << "Enter the Array Size\n";
    cin >> arraysize;
    Array myarray(arraysize);
    myarray.Fill();
    cout << "Array size =" << myarray.getSize() << " while length = " << myarray.getLength() << "\n";
    myarray.Display();
}

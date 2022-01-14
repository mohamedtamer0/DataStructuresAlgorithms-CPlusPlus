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

    int Search(int key) {
        int index = -1;
        for (int i = 0; i < length; i++) {
            if (items[i] == key) {
                index = i;
                break;
            }
            return index;
        }
    }

    void Append(int newitem) {
        if (length < size) {
            items[length] = newitem;
            length++;
        } else {
            cout << "Array is full\n";
        }
    }

    void Insert(int index, int newitem) {
        if (index >= 0 && index < size) {
            for (int i = length; i > index; i--) {
                items[i] = items[i - 1];
            }
            items[index] = newitem;
            length++;
        } else {
            cout << "Error - Index out of Range \n";
        }
    }

};


int main() {
    cout << "Hello This is Array ADT demo\n";
    int arraysize;
    cout << "Enter the Array Size\n";
    cin >> arraysize;
    Array myarray(arraysize);
    myarray.Fill();
    cout << "Array size = " << myarray.getSize() << " while length = " << myarray.getLength() << "\n";
    myarray.Display();
    cout << "Enter the value to search for \n";
    int key;
    cin >> key;
    int index = myarray.Search(key);
    if (index == -1) {
        cout << "Item is Found \n";
    }

    int newitem;
    cout << "Enter new item to add to the array \n";
    cin >> newitem;
    myarray.Append(newitem);
    myarray.Display();


    cout << "Enter Index and Item \n";
    cin >> index;
    cin >> newitem;
    myarray.Insert(index, newitem);
    myarray.Display();
    cout << "Array size = " << myarray.getSize() << " while length = " << myarray.getLength() << "\n";


}

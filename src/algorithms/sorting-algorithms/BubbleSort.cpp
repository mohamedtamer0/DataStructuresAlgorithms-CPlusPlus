#include <iostream>

using namespace std;

void swap(int *xp, int *yp) {
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

// A function to implement bubble sort
//void bubbleSort(int arr[], int n) {
//    int i, j;
//    for (i = 0; i < n - 1; i++) {
//        // Last i elements are already in place
//        for (j = 0; j < n - i - 1; j++) {
//            if (arr[j] > arr[j + 1]) {
//                swap(&arr[j], &arr[j + 1]);
//            }
//        }
//    }
//}


// Another Way

void bubbleSort(int arr[], int n) {
    int i, j;
    bool swapped;
    for (i = 0; i < n - 1; i++) {
        swapped = false;

        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
                swapped = true;
            }
        }

        if (swapped == false)
            break;
    }
}


/* Function to print an array */
void printArray(int arr[], int size) {
    for (int j = 0; j < size; j++) {
        cout << arr[j] << " ";
    }
    cout << endl;

}


int main() {

    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr, n);
    cout << "Sorted array: \n";
    printArray(arr, n);
    return 0;
}
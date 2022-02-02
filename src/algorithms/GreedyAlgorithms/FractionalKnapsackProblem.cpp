#include <bits/stdc++.h>

using namespace std;

struct Item {
    int value, weight;

    //Constructor
    Item(int value, int weight) {
        this->value = value;
        this->weight = weight;
    }
};


// Comparison function to sort Item according to val/weight
// ratio
bool cmp(struct Item a, struct Item b) {
    double r1 = (double) a.value / (double) a.weight;
    double r2 = (double) a.value / (double) a.weight;
    return r1 > r2;
}

// Main greedy function to solve problem
double fractionalKnapsack(int W, struct Item arr[], int n) {
    sort(arr, arr + n, cmp);


    int curWeight = 0;
    double finalvalue = 0.0;

    for (int i = 0; i < n; i++) {
        if (curWeight + arr[i].weight <= W) {
            curWeight += arr[i].weight;
            finalvalue += arr[i].value;
        } else {
            int remain = W - curWeight;
            finalvalue += arr[i].value * ((double) remain / (double) arr[i].weight);
            break;
        }
    }

    return finalvalue;
}


int main() {
    int W = 50;
    Item arr[] = {{60, 10}, {100, 20}, {120, 30}};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Function call
    cout << "Maximum value we can obtain = "
         << fractionalKnapsack(W, arr, n);
    return 0;
}

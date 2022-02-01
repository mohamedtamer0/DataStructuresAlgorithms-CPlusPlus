#include <iostream>

using namespace std;

class gfg {
public:
    int power(int x, unsigned int y) {
        int temp;
        if (y == 0) {
            return 1;
        }
        temp = power(x, y / 2);
        if (y % 2 == 0) {
            return temp * temp;
        } else {
            return x * temp * temp;
        }
    }
};

int main() {
    gfg g;
    int x = 2;
    unsigned int y = 3;
    cout << g.power(x, y);
}
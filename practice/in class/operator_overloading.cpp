#include <iostream>
using namespace std;

class Number {
    int x;

public:
    Number(int a) {
        x = a;
    }

    Number operator+(Number n) {
        return Number(x + n.x);
    }

    void display() {
        cout << x;
    }
};

int main() {
    Number n1(10);
    Number n2(20);

    Number n3 = n1 + n2;

    n3.display();

    return 0;
}
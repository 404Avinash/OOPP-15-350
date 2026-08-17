#include <iostream>
using namespace std;

void callByValue(int val) {
    val = val + 10;
    cout << "Inside callByValue: " << val << endl;
}

void callByReference(int &ref) {
    ref = ref + 10;
    cout << "Inside callByReference: " << ref << endl;
}

void callByAddress(int *ptr) {
    *ptr = *ptr + 10;
    cout << "Inside callByAddress: " << *ptr << endl;
}

int main() {
    int a = 5, b = 5, c = 5;

    cout << "Initial values: a = " << a << ", b = " << b << ", c = " << c << endl;

    callByValue(a);
    cout << "After callByValue, a = " << a << " (No change)" << endl;

    callByReference(b);
    cout << "After callByReference, b = " << b << " (Modified)" << endl;

    callByAddress(&c);
    cout << "After callByAddress, c = " << c << " (Modified)" << endl;

    return 0;
}

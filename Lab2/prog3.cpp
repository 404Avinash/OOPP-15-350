#include<bits/stdc++.h>

using namespace std;

void show(int x, int y) {
    cout << "x : " << x << ", y : " << y << endl;
}

void swapByVal(int x, int y) {
    int z = x;
    x = y;
    y = z;
    cout << "Value after Swap : " << endl;
    show(x, y);
}

void swapByAddress(int *x, int *y) {
    int z = *x;
    *x = *y;
    *y = z;
    cout << "Value after Swap : " << endl;
    show(*x, *y);
}

void swapByReference(int& x, int& y) {
    int z = x;
    x = y;
    y = z;
    cout << "Value after Swap : " << endl;
    show(x, y);
}

int main() {

    int x, y;

    cout << "Enter the numbers : ";
    cin >> x >> y;

    cout << "Swapping by Value " << endl;
    cout << "Value before Swap" << endl;
    show(x, y);
    swapByVal(x, y);

    
    cout << "Swapping by Address " << endl;
    cout << "Value before Swap" << endl;
    show(x, y);
    swapByAddress(&x, &y);

    cout << "Swapping by Reference " << endl;
    cout << "Value before Swap" << endl;
    show(x, y);
    swapByReference(x, y);

    return 0;

}
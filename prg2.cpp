#include <iostream>
using namespace std;

void show(int x, int y)
{
    cout << "x: " << x << ", y: " << y << endl;
}

// Call by Value
void swapByVal(int x, int y)
{
    int z = x;
    x = y;
    y = z;
}

// Call by Reference
void swapByRef(int &x, int &y)
{
    int z = x;
    x = y;
    y = z;
}

// Call by Address
void swapByAddress(int *x, int *y)
{
    int z = *x;
    *x = *y;
    *y = z;
}

int main()
{
    int x = 10, y = 20;

    cout << "Before swapByVal: ";
    show(x, y);

    swapByVal(x, y);

    cout << "After swapByVal: ";
    show(x, y);

    cout << endl;

    cout << "Before swapByRef: ";
    show(x, y);

    swapByRef(x, y);

    cout << "After swapByRef: ";
    show(x, y);

    cout << endl;

    cout << "Before swapByAddress: ";
    show(x, y);

    swapByAddress(&x, &y);

    cout << "After swapByAddress: ";
    show(x, y);

    return 0;
}
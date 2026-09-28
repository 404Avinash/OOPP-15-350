#include <iostream>
using namespace std;

class Point {
    int x, y;

public:
    void input(int a = 0, int b = 0);
    void show();
};

inline void Point::input(int a, int b) {
    x = a;
    y = b;
}

inline void Point::show() {
    cout << "x = " << x << ", y = " << y << endl;
}

int main() {
    Point p1, p2;

    int x, y;

    cout << "Enter point 1: ";
    cin >> x >> y;
    p1.input(x, y);

    cout << "Enter point 2: ";
    cin >> x >> y;
    p2.input(x, y);

    cout << "Point 1: ";
    p1.show();

    cout << "Point 2: ";
    p2.show();

    return 0;
}
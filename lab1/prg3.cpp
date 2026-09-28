#include <iostream>
using namespace std;

class Point {
    int x, y;

public:
    void input() {
        cout << "Enter x and y: ";
        cin >> x >> y;
    }

    void show() {
        cout << "x = " << x << ", y = " << y << endl;
    }
};

int main() {
    Point p1, p2;

    p1.input();
    p2.input();

    cout << "Point 1: ";
    p1.show();

    cout << "Point 2: ";
    p2.show();

    return 0;
}
#include<iostream>

using namespace std;

class Point {
    int x, y;

    public:

    Point(int x = 0, int y = 0) :
    x{x},
    y{y}
    {}

    void show() {
        cout << x << ", " << y << endl;
    }

    friend Point operator+(Point, Point);

};

Point operator +(Point t1, Point t2) {
        return Point(t1.x + t2.x, t1.y + t2.y);
    }

int main() {
    Point p(12, 6), q(-5, 7);
    Point r = p + q;
    p.show();
    q.show();
    r.show();
}
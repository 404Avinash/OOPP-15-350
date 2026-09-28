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

    Point operator+(Point t) {
        return Point(x + t.x, y + t.y);
    }
};

int main() {
    Point p(12, 5), q(-5, 7);
    Point r = p + q;
    p.show();
    q.show();
    r.show();
}
#include<iostream>

using namespace std;

class Point {
    int x, y;

    public:

    Point(int x = 0, int y = 0) :
    x{x},
    y{y}
    {}

    friend ostream &operator << (ostream &os, Point t);

    Point operator+(Point t) {
        return Point(x + t.x, y + t.y);
    }
};

ostream &operator << (ostream &os, Point t) {
        os << t.x << ", " << t.y << endl;
        return os;
    }

int main() {
    Point p(12, 5), q(-5, 7);
    Point r = p + q;
    cout << p;
    cout << q;
    cout << r;
    
}
#include <iostream>
using namespace std;

class point
{
    int x, y;

public:
    point(int a = 0, int b = 0)
    point ( int x = 0, int y =0) : x{x} , y{y} {}
    friend ostream &operator<<(ostream &os, Point t)
    {
        x = a;
        y = b;
    }

    void show()
    {
        cout << x << " " << y << endl;
    }

    friend point operator+(point p, point q);
};

point operator+(point p, point q)
{
    return point(p.x + q.x, p.y + q.y);
}

int main()
{
    point p(12, 6), q(-5, 7);

    point r = p + q;

    p.show();
    q.show();
    r.show();

    return 0;
}
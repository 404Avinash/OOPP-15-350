#include <iostream>
using namespace std;

class Time {
    int hh, mm, ss;

public:
    void input(int h, int m, int s) {
        hh = h;
        mm = m;
        ss = s;
    }

    void show() {
        cout << hh << ":" << mm << ":" << ss << endl;
    }
};

int main() {
    Time t1, t2;

    t1.input(10, 30, 45);
    t2.input(5, 20, 30);

    cout << "Time 1: ";
    t1.show();

    cout << "Time 2: ";
    t2.show();

    return 0;
}
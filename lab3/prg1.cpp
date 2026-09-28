#include <iostream>
using namespace std;

class Time {
    int hh, mm, ss;

public:
    void input(int h = 0, int m = 0, int s = 0);
    void show();
};

void Time::input(int h, int m, int s) {
    hh = h;
    mm = m;
    ss = s;
}

void Time::show() {
    cout << hh << ":" << mm << ":" << ss << endl;
}

int main() {
    Time t1, t2;

    int h, m, s;

    cout << "Enter time 1: ";
    cin >> h >> m >> s;
    t1.input(h, m, s);

    cout << "Enter time 2: ";
    cin >> h >> m >> s;
    t2.input(h, m, s);

    cout << "Time 1: ";
    t1.show();

    cout << "Time 2: ";
    t2.show();

    return 0;
}
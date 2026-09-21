#include <iostream>
using namespace std;

class Student {
    int a, b;

public:
    void input();
    void show();
};

void Student::input() {
    cout << "Enter a and b: ";
    cin >> a >> b;

}

void Student::show() {
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
}

int main() {
    Student s;

    s.input();
    s.show();

    return 0;
}
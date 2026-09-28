#include <iostream>
using namespace std;

inline int add(int a, int b) {
    return a + b;
}

int sum(int a, int b, int c = 0) {
    return a + b + c;
}

double multiply(double a, double b) {
    return a * b;
}

int main() {
    cout << "Addition: " << add(10, 20) << endl;
    cout << "Sum: " << sum(10, 20) << endl;
    cout << "Sum of three numbers: " << sum(10, 20, 30) << endl;
    cout << "Multiplication: " << multiply(2.5, 4.0) << endl;

    return 0;
}
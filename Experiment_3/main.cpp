#include <iostream>
using namespace std;

// Inline function
inline int multiply(int a, int b) {
    return a * b;
}

// Function with default arguments
int add(int a, int b, int c = 0, int d = 0) {
    return a + b + c + d;
}

// Function overloading
float add(float a, float b) {
    return a + b;
}

int main() {
    cout << "--- Inline Function ---" << endl;
    cout << "Multiply 5 and 4: " << multiply(5, 4) << endl;

    cout << "\n--- Default Arguments ---" << endl;
    cout << "Add 2 numbers (10, 20): " << add(10, 20) << endl;
    cout << "Add 3 numbers (10, 20, 30): " << add(10, 20, 30) << endl;
    cout << "Add 4 numbers (10, 20, 30, 40): " << add(10, 20, 30, 40) << endl;

    cout << "\n--- Function Overloading ---" << endl;
    cout << "Add two floats (5.5, 2.3): " << add(5.5f, 2.3f) << endl;

    return 0;
}

#include<bits/stdc++.h>

using namespace std;

class Complex {
    float real, img;

    public:

    void input() {
        cout << "Enter the real part : ";
        cin >> real;
        cout << "Enter the imaginary part : ";
        cin >> img;
    }

    Complex add(Complex &c1, Complex &c2) {
        Complex result;

        result.real = c1.real + c2.real;
        result.img = c1.img + c2.img;

        return result;
    }

    Complex add(Complex &c) {
        Complex result;

        result.real = real + c.real;
        result.img = img + c.img;

        return result;
}

    void display() {

        cout << real;
        if(img >= 0) {
            cout << "+" << img << "i" << endl;
        } else {
            cout << img << "i" << endl;
        }
    }
};

int main() {

    Complex c1, c2, result1, result2;
    c1.input();
    c2.input();

    result1 = result1.add(c1, c2);
    result2 = c1.add(c2);

    result1.display();
    result2.display();
}
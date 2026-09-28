#include <iostream>
using namespace std;

void updateSalary(double &salary) {
    salary = salary + (salary * 0.10);
}

int main() {
    double salary = 50000;

    updateSalary(salary);

    cout << "Updated Salary: " << salary << endl;

    return 0;
}
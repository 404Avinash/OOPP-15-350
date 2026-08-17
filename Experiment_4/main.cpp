#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Using auto for type deduction
    auto greeting = "Hello, Modern C++!";
    cout << greeting << endl;

    // A collection of numbers
    vector<int> numbers = {10, 20, 30, 40, 50};

    cout << "Traversing using range-based for loop:" << endl;
    // Using range-based for loop and auto
    for (auto num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}

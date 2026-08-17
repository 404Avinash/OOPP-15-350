#include <iostream>
using namespace std;

class Demo {
private:
    int id;

public:
    // Default Constructor
    Demo() {
        id = 0;
        cout << "Default Constructor called. ID: " << id << endl;
    }

    // Parameterized Constructor
    Demo(int i) {
        id = i;
        cout << "Parameterized Constructor called. ID: " << id << endl;
    }

    // Copy Constructor
    Demo(const Demo &obj) {
        id = obj.id;
        cout << "Copy Constructor called. ID: " << id << endl;
    }

    // Destructor
    ~Demo() {
        cout << "Destructor called for ID: " << id << endl;
    }
};

int main() {
    cout << "Creating obj1..." << endl;
    Demo obj1; // Calls default constructor

    cout << "\nCreating obj2..." << endl;
    Demo obj2(10); // Calls parameterized constructor

    cout << "\nCreating obj3 from obj2..." << endl;
    Demo obj3 = obj2; // Calls copy constructor

    cout << "\nEnd of main function, objects will be destroyed..." << endl;
    return 0;
}

#include<iostream>

using namespace std;

int main() {
    string name1, name2;
    int roll1, roll2;

    cout << "Enter the name of first student : ";
    cin >> name1;

    cout << "Enter the roll number of first student : ";
    cin >> roll1;

    cout << "Enter the name of second student : ";
    cin >> name2;

    cout << "Enter the roll number of second student : ";
    cin >> roll2; 

    cout << "The students are : \n";
    cout << "Name : " << name1 << " " << "Roll no. " << roll1 << endl;
    cout << "Name : " << name2 << " " << "Roll no. " << roll2 << endl;
}
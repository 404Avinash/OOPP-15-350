#include <bits/stdc++.h>
using namespace std;

int main() {
    int number;
    cin>> number;

    switch(number){
        case 1:
        cout<<"English";
        break;
        
        case 2:
        cout<<"Hindi";
        break;
        case 3:
        cout<<"Marathi";
        break;

        default:
        cout<<"Invalid Input";
    }
    return 0;
}
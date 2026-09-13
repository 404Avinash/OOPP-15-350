#include <bits/stdc++.h>
using namespace std;

int main() {
    int marks;
    cin>> marks;

    if(marks>=90){
        cout<<"Excellent";
    }
    else if (marks>=70){
        cout<<"Good";
    }
    else if(marks>=40){
        cout<<"fair";
    }

else{ 
    cout<<"bad";
    }
    return 0;
}
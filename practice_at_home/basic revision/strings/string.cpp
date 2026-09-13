#include <bits/stdc++.h>
using namespace std;

int main() {
    string name = "Avi";
    name[3]='y';
    cout<<name[0]<<"\n";
    cout<<name<<"\n";

    sort(name.begin(),name.end());
    reverse(name.begin(),name.end());
    cout<<name;
    return 0;
}

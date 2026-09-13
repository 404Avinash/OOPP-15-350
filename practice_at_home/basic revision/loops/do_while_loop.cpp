#include <bits/stdc++.h>
using namespace std;

int main() {
    for(int i=0;i<10;i++){
        cout<<i<<"";
    }
    cout<<"/n";

    int j=32145;
    while(j>0){
        int r=j%10;
        cout<<r<<" ";
        j/=10;
    }

    cout<<"/n";


    int k=0;
    do{
        cout<<k<<" ";
        k/10;
    }
    while(k>0);

    return 0;
}
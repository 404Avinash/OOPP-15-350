#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int>v;
    v.push_back(3);
    v.push_back(2);
    v.push_back(7);

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<"\n";

    for(auto &it:v){
        cout<<it<<" ";
    }
    cout<<"\n";
    return 0;
}
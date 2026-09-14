#include <bits/stdc++.h>
using namespace std;

class student {
  public:
  
  int id;
  int roll;
  string name;
  
  void display(){
      cout << "ID of the student : " << id << endl;
      cout << "Name of the student : " << name << endl;
      cout << "Roll no. :" << roll << endl;
  }
};

int main(){
    student s;
    
    cin >> s.id >> s.roll >> s.name;
    s.display();
}
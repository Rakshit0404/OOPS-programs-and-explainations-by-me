#include<bits/stdc++.h>
using namespace std;

class Human{
public:
  Human()
  {
    cout<<"constructor of Human class"<<endl;
  }
  ~Human()
  {
    cout<<"destructor of Human class is called"<<endl;
  }
};
class Student:public Human{
public:
  Student()
  {
    cout<<"constructor of Student class is called"<<endl;
  }
  ~Student()
  {
    cout<<"Destructor of the Student Class is called"<<endl;
  }
};
//this program teaches the order of execution of the constructors and destructors
//multiple classes and subclasses on declaration of the object of the subclass;
int main()
{
  Student Rakshit;
}

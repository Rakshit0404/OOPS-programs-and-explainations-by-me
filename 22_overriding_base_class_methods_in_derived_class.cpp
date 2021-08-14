#include<bits/stdc++.h>
using namespace std;

class Human{
public:
  void introduce()
  {
    cout<<"hi i am a person"<<endl;
  }
};

class Student:public Human{
public:
  void introduce()
  {
    cout<<"hi i am a student"<<endl;
  }
};
//here as both the base class and subclass have the same stencil of member function
//introduce and either one of the two can be called in such a case. So when we create
//an object of subclass Student, We actually execute the student member function and not either
//base class member function. So this doesnt follow the norms of overloading and we face such a problem.
int main()
{
  Student Rakshit;
  Rakshit.introduce();
}

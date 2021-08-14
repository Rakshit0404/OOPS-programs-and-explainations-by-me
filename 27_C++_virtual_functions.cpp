//Here we will see that when the base class has a virtual function and a derived class is created,
// even the class derived from the derived class of base class inherits the property of having a
//parent virtual function. (Refer the program) Now the introduce fundtion of the derived class Student
//also acts as if it has a virtual keyword in front of it and gets overridden by the class derived
//from derived class Good Student. If there is no overriding in derived class, then the virual function
//of the parent simply gets executed.
#include<bits/stdc++.h>
using namespace std;

class Human{
public:
  virtual void introduce()
  {
    cout<<"Hi from Human"<<endl;
  }
};
//derived class
class Student:public Human{
public:
  void introduce()
  {
    cout<<"Hi from Student"<<endl;
  }
};
//derived class of derived class
class GoodStudent: public Student{
public:
  void introduce()
  {
    cout<<"Hi from Good Student"<<endl;
  }
};
void WhoIsThis(Human &ob)
{
  ob.introduce();
}
int main()
{
  Human Rakshit;
  Student Rajeev;
  GoodStudent Fardeen;
  WhoIsThis(Rakshit);
  WhoIsThis(Rajeev);
  WhoIsThis(Fardeen);
}

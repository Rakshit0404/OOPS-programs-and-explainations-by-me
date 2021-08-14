#include<bits/stdc++.h>
using namespace std;

class Human{
public:
  virtual void introduce()//to make a virtual function just put the keyword virtual before mentioning its return type.
  {
    cout<<"Hello from human"<<endl;
  }
};
class Student:public Human{
public:
  void introduce()
  {
    cout<<"Hello from Student"<<endl;
  }
};
class Teacher:public Human{
public:
  void introduce()
  {
    cout<<"Hello from Teacher"<<endl;
  }
};
void whoIsThis(Human &ob)//remember, here if we simply pass the object, virtual funtions don't work as expected.
{                        //For virtual functions of base class to work, we need to use the address of the object
  ob.introduce();        //of derived class as an argument in place of the base class's object address parameter.
}

int main()
{
  Student Rakshit;
  // Rakshit.introduce();
  whoIsThis(Rakshit);
  Teacher Rajeev;
  whoIsThis(Rajeev);
}

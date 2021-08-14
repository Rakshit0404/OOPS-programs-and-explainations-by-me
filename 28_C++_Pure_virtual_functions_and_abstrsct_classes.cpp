//if we have declared a pure virtual function in the base class, unlike the normal virtual functions,
//we have have to compulsarily override the virual function in the derived classes. Without that the program wont compile.
#include<bits/stdc++.h>
using namespace std;

class Human{
public:
  virtual void introduce()=0;//This is the declaration of pure virtual functions in the base class but we define the actual function
                             //outside. This is just a general convention to write thr pure virtual function outside the base class.
  virtual void display()=0;
};

void Human::introduce()
{
  cout<<"Hi I am a human"<<endl;
}

void Human::display()
{
  cout<<"Kya display"<<endl;
}
//note: after making a pure virtual function in a class, we cannot further declare an object of that class. It acts as an abstract classes
//and abstract classes cant be used to make objects. Pure virtual funtions are created in a base class just to make it as a foundation for further derived classes.

class Student:public Human{
public:
  void introduce()
  {
    cout<<"Hi I am a student"<<endl;
    Human::introduce();
  }
  void display()
  {
    cout<<"Pata hai kya display"<<endl;
  }
};

int main()
{
  Student Rakshit;
  Rakshit.introduce();
}

#include<bits/stdc++.h>
using namespace std;

class Human{
protected:// this is similar is private access specifier, gives all the security
          //of private, but also makes these secure members accessible in subclass
  string name;
public:
  int age;
  void setName(string iname)
  {
    name=iname;
  }
};

class Student:public Human{
public:
  void display()
  {
    cout<<name <<endl;//here we access name which is protected and still usable
                      //in subclass, it is not accessible anywhere other than base
                      // class and subclass.
  }
};

int main()
{
  Student Rakshit;
  //Rakshit.name="" is invalid as protected is similar to private.
  Rakshit.setName("Rakshit");
  Rakshit.display();
}

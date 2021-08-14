#include<bits/stdc++.h>
using namespace std;
class Human{
protected:
  string name;//the protected member of the base class person acts as a protected
              //member of the subcalss. But the private members of the base class
              //are not available in the subclass. And also the public methods of
              //the base class is available as public member and method of the subclass
              //just like protected.
public:
  void setName(string iname)
  {
    name=iname;
  }
};

class Student:public Human{
public:
  void display()
  {
    cout<<name<<endl;
  }
};


int main()
{
  Student Rakshit;
  Rakshit.setName("Rakshit");
  Rakshit.display();
  //cout<<Rakshit.name; this wont work as this is protected not inly in the vase
  //class but also protected in the subclass. But setName function was available
  //in all the three spaces, base class, subclass, other functions.
}

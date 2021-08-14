//here we make the inherited members of a pivate inherited subclass accessible
//int the other functions as well
#include<bits/stdc++.h>
using namespace std;
class Human{
protected:
  string name;
public:
  void setName(string iname)
  {
    name=iname;
  }
};
class Student:private Human{
public:
  Human::name;//this line makes human accessible in main function through the object of
              //class student. Even though this is a private inherited class still these variables
              //would be accessible.
  Human::setName;
  void display()
  {
    cout<<name<<endl;
  }
};
int main()
{
  Student Rakshit;
  Rakshit.name="Rakshit";
  Rakshit.setName("Rakshit");//both the variable and function are now accessible in the main as well
  //for an object of student class.
  Rakshit.display();
}

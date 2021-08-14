//inheritance allows us to use the features of one class into the other classes
//here class human is base class and class student is subclass as student is built upon
//human class, this is inheritance and provides a huge advantage.
#include<bits/stdc++.h>
using namespace std;
class Human
{
public://in private access specifier, these members are not available in subclass, so we use
       //protected access specifier which is in the next file.
  string name;
  int age;
  void setName(string iname){name=iname;}
  void setAge(int iage){age=iage;}
};
//this new class using :public human specifies that it uses the non private properties of
//the class "human". including all non private member variables and member functions
class Student : public Human{
public:
  int id;
  void setId(int iid){
    id=iid;
  }
  void studentIntro()
  {
    //while using the members of class human in class Student, we dont need tp write anything
    //extra, just use the members as it is.
    cout<<"hi my name is "<<name<<" and i am "<<age<<" years old."<<endl<<"My id is "<<id;
  }
};
int main()
{
  Student Rakshit;
  //even here we have an object of class student, which uses member functions of class human
  //without nay addition of extra keywords.
  Rakshit.setName("Rakshit");
  Rakshit.setAge(20);
  Rakshit.setId(123);
  Rakshit.studentIntro();
}

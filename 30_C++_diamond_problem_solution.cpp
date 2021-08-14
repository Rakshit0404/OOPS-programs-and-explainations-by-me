//to solve the previous problem, we used virtual inheritance.
//Do remember to run the program and see the order of creation of classes and use of constructors. This
//gives a good idea of the order in which the constructors are being executed. The grandparent base class
//constructor is the first one to get executed. Then the heirarchy follows the same order of derivation of subclasses.

#include<bits/stdc++.h>
using namespace std;

class Animal{
public:
  Animal()
  {
    cout<<"Grr from animal"<<endl;
  }
  int age;
  void display()
  {
    cout<<"kya display"<<endl;
  }
};

class Lion:virtual public Animal{//here using virtual keyword at the time of inheritance, removes ambiguity.
public:
  Lion()
  {
    cout<<"Grr from Lion"<<endl;
  }
};

class Tiger:virtual public Animal{//here using virtual keyword at the time of inheritance, removes ambiguity.
public:
  Tiger()
  {
    cout<<"Grr from tiger"<<endl;
  }
};

class Liger:public Lion,public Tiger{//now after using the above virtual keywords, we can use the grandparent base class methods in grandchild
public:
  Liger()
  {
    cout<<"Grr from Liger"<<endl;
  }                                     //derived class without issues.

};
int main()
{
  Liger Rakshit;
  Rakshit.display();
}

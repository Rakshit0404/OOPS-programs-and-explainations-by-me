//This is a diamond problem which occurs when we make a base class, derive two classes from base class,
//and then derive a single grandchild derived class from both the derived classes. Now there is an ambiguity
//when we use the grandparent base class mehtod int the grandchild derived class (Rakshit.display()), that is,
//the program is unable to decide whether the inheritance of the members of the grandparent in the grandchild
//is done through which of the two derived classes (Lion or Tiger). Refer the next file for solution.

#include<bits/stdc++.h>
using namespace std;

class Animal{
public:
  int age;
  void display()
  {
    cout<<"kya display"<<endl;
  }
};

class Lion:public Animal{

};

class Tiger:public Animal{

};

class Liger:public Lion,public Tiger{

};
int main()
{
  Liger Rakshit;
  Rakshit.display();
}

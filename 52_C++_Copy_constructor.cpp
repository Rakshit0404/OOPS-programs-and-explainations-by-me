//problem without copy contructor is, suppose we equate two objects, both of them look and work exactly the same. But if
//we have use "=" to copy the value of prevoius object to the new object, The dynamic member variables of the frist object, do not, get copied
//from one object to other. Instead the address of the dynamic variable is same for both the objects, so if the dynamic variable is updated in
//one of the objects, the change gets reflected in the copied object also. So we do not equate to cpy the object. We instead use copy constructor.

#include<bits/stdc++.h>
using namespace std;

class Person{
  string *name;
  int age;
public:
  Person(string name,int age)
  {
    this->name=new string(name);
    this->age=age;
  }
  Person(Person& origi)
  {
    name=new string(*(origi).name);
    age=origi.age;
  }
  void changedetails(string name,int age)
  {
    *(this->name)=name;
    this->age=age;
  }
  void display()
  {
    cout<<"My name is "<<*name<<" and I am "<<age<<endl;
  }
};

int main()
{
  Person Rakshit("Rakshit",20);
  Rakshit.display();
  Person Rakshitcopy=Rakshit;//both these statements work to copy the prvious object into the new one.
  Person Rakshitcopy(Rakshit);
  Rakshitcopy.display();
  Rakshit.changedetails("Rakshit Srivastava",21);
  Rakshit.display();
  Rakshitcopy.display();
}

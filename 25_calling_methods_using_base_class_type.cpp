#include<bits/stdc++.h>
using namespace std;

class Human{
public:
  void introduce()
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

void whoIsThis(Human ob)
{
  ob.introduce();
}
//here we know that as usual according to c++, if we have the methods(member funtions) of
//same stencil in both parent class and subclass, while executing the method in the int main(int argc, char const *argv[]) {
//we execute the subclass method by default. So here we made a new function whoIsThis in which we take Human object as parameter. But
//as Student class is a subclass of Human, Student object is also a human object. So this lets us pass the student object as an argument
//to a function where the parameter is a human Object. This is one more way of specifying other than (Rakshit.Human::introduce()).

int main()
{
  Student Rakshit;
  Rakshit.introduce();
  whoIsThis(Rakshit);
}

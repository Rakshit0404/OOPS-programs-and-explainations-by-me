#include<bits/stdc++.h>
using namespace std;

class Human{
private://if we dont specify access specifier, it is set to private by default.
  string name;
  int age;
public:
  Human(string iname,int iage)
  {
    name=iname;
    age=iage;
  }
  void tellme()
  {
    cout<<name<<endl<<age<<endl;
  }
  friend void display(Human man);//we need this declaration of the friend function in the
                                    //class itself. Only then it becomes friend function
                                    //the friend keyword is compulasary, otherwise we wont
                                    //be able to access private member functions.
  /*friend class <classname>*/
  //method to declare a friend class of this class
};

void display(Human man)
{
  cout<<man.name<<endl<<man.age<<endl;
}
//if we make a friend class to our class, the member variables of our class are accessible
//in the other class, and the mmber functions of the other class become friend fucntions to
//our class. All the functions of that other class, including the friend functions of that class
//can access the member variables of our class.
int main()
{
  Human Rakshit("Rakshit",20);
  display(Rakshit);
}

#include<bits/stdc++.h>
using namespace std;

class Human{
public:
  void introduce()
  {
    cout<<"hi i am a Human"<<endl;
  }
};

class Student:public Human{
public:
  void introduce()
  {
    cout<<"hi i am a student"<<endl;
    Human::introduce();//to perform this particular task we can also use the suclass to perform the
                      //overriden execute of the base class.
  }
};

int main()
{
  Student Rakshit;
  Rakshit.introduce();
  Rakshit.Human::introduce();//by writing this we access the member function of the base subclass
                             //by using this scope resolution statement. This refer subclass object to base class.
}

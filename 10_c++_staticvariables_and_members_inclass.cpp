#include<bits/stdc++.h>
using namespace std;

class Human
{
public:
  static int id;//this variable will have the same value in next object
                //what the previous object has changed. So this statement is exected only once
                //and rest all the objects build pon the same value of "id" left by the previous bject
                //static variable gets declared at the time of execution of program and not on execution of objects.
  void ids()
  {
    cout<<"there are "<<++id<<" humans in this program"<<endl;
  }

};

int Human::id=0;//this is the way to set the inital value of a static variable and not inside the class

int main()
{
  Human Rakshit;
  Human anil;
  Human Rajeev;
  Rakshit.ids();
}

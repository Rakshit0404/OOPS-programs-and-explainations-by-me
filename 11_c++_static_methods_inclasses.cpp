#include<bits/stdc++.h>
using namespace std;

class Human
{
public:
  static int Humancount;//this variable will have the same value in next object
                //what the previous object has changed. So this statement is exected only once
                //and rest all the objects build pon the same value of "id" left by the previous bject
                //static variable gets declared at the time of execution of program and not on execution of objects.
  Human()
  {
    Humancount++;
  }
  void counting_human()
  {
    cout<<"there are "<<Humancount<<" humans in this program"<<endl;
  }

  static void total_human()
  {
    cout<<"there are "<<Humancount<<" humans in this program"<<endl;
  }

};

int Human::Humancount=0;//this is the way to set the inital value of a static variable and not inside the class

int main()
{
  Human Rakshit;
  Human anil;
  Human Rajeev;
  Human::total_human();//static functions are used only once in the program. To use them
                       //we write in this way using scope resolution and the only one time
                       // this static fntion of the class gets executed.
}

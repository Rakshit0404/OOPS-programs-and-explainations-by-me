#include<iostream>
using namespace std;

namespace{
  int x;
  namespace one{//there is no interference of outside x to the inner x.
    int x=250;
    void display()
    {
      cout<<x<<endl;
    }
  }
}

int main()
{
  x=100;
  cout<<x<<endl;
  one::x=100;
  one::display();//whenever display is called, x has a value of 250, and then
                 //the one::x=100 changes the value of the x inside one and now the display function prints 100.
                 //this means x=250 gets executed in the very start of compilation of the program.
}

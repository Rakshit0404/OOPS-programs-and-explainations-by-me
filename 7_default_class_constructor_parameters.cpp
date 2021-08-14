#include<bits/stdc++.h>
using namespace std;

class Human
{
private:
  string name;
  int age;
public:
  Human(string newname="noname",int age=0)
  {
    //this is a default constructor as well as arguments can be passed while
    //making the object because parameters have default assignment but if arguments
    //are passed, default gets overriden. So it acts as both default and not default.
    cout<<newname<<" is "<<age<<" years old"<<endl;
  }
};


int main()
{
   //both work
  Human Rakshit("Rakshit",20);
  Human Rajeev;
}

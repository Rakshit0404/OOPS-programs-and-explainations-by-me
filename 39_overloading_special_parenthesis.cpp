//This program is overloading function call operator, so we designed it in a away that we can work it as a function itself.
//With operator overloading, our main aim is to make our class accessible in multiple ways possible.
#include<bits/stdc++.h>
using namespace std;

class Marks{
  int mark;
public:
  Marks(int m){
    mark=m;
  }
  void printMarks()
  {
    cout<<"My marks are "<<mark<<endl;
  }

  void operator()(int m)
  {
    mark=m;
  }
};

int main()
{
  Marks Rakshit(67);//this is the constructor working.
  Rakshit.printMarks();
  Rakshit(98);//this is the operator function. It has the same functionality as a contructor here but, can be used as per usage.
  Rakshit.printMarks();
}

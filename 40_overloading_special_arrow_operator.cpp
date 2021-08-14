//even here friend function can't be used. This is used to make arrow operator
//reference to members through objects directly.

//not: this can't even be a static member function, so we use a pointer
#include<bits/stdc++.h>
using namespace std;

class Marks{
  int mark;
public:
  Marks(int m)
  {
    mark=m;
  }
  void printMarks()
  {
    cout<<"My marks are "<<mark<<endl;
  }

  Marks *operator->()//here no parameters because the object and member are both passed implicitly.
  {                 //
    return this;
  }
};

int main()
{
  Marks Rakshit(89);
  Rakshit.printMarks();
  Rakshit->printMarks();//this way of accessing members can only be used by pointers normally but here we made an
                        //operator funtion which can use the same way od presentation.
}

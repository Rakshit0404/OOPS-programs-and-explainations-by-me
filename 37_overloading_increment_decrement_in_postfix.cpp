//This if a bit different than prefix as well as difficult to understand. Here we return a different object from
//the operator function and returning something is compulsary even in the member function. We need to bluff by
//passing int which is of no use because thats how the compiler reads it. In friend implementaion, we need top pass the object
//as usual. The work that is done in the main function is performed on the previous value and not the incremented value.
#include<bits/stdc++.h>
using namespace std;

class Marks{
  int mark;
public:
  Marks()
  {
    mark=0;
  }
  Marks(int m)
  {
    mark=m;
  }
  void showMarks()
  {
    cout<<mark<<endl;
  }
  Marks operator++(int)
  {
    Marks dupli(*this);
    mark++;
    return dupli;
  }
  friend Marks operator--(Marks &,int);
};

Marks operator--(Marks &m1, int){
  Marks dupli(m1);
  (m1.mark)-=1;
  return dupli;//This duplicate object comes into use for getting the values brfore the change. As it is the copy
               //of the unchanged object. Here the int argument is just used to make it work like a unary operator ans the
               //compiler doesn't know about it. We pretend that there is something after the ++. But actually we have nothing.
}

int main()
{
  Marks RakshitsMarks(99);
  RakshitsMarks.showMarks();

  (RakshitsMarks++).showMarks();//this line prints the previous value as post decrement is working, and it is actually printing
  //the data of duplicate object passed from the operator function
  (RakshitsMarks--).showMarks();//same goes for this too.

  RakshitsMarks.showMarks();
}

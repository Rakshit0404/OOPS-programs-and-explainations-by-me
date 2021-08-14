//THis is the overloading for unary operators in prefix form.
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
  void operator++()
  {
    mark+=1;
  }
  friend void operator--(Marks&);//has an argument because this is not a member function.
};                               //So this does't get the object implicitly.

void operator--(Marks &m1)
{
  m1.mark-=1;
}

int main()
{
  Marks RakshitsMarks(99);
  RakshitsMarks.showMarks();
  ++RakshitsMarks;
  RakshitsMarks.showMarks();
  --RakshitsMarks;
  RakshitsMarks.showMarks();
  //note: We can't write [ (--RakshitsMarks).showMarks() ] because -- is not a normal operator here.
  //It is working on an object. and -- is a function which returns a void type value. If we use
  //[ (--RakshitsMarks).showMarks() ] this expression, we are actually using the funtion showMarks() on the returned void value
  //and not the object.
  //If we return the value from the function, in that case we can we this expression.
}

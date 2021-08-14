//operator overloading is one of the most important and comparatively unique feature of
//c++ oops. Using this, we can add properties of objects and return it to a variable. There
//can be a wide variety of usages of operator overloading. We can overload almost all operators
//for multiple usages. And even the operator function can return any data tyle, even an object of a class also
//like in this example.
#include<bits/stdc++.h>
using namespace std;

class Apples{
  int ownApples;
  int goneApples;
public:
  Apples()
  {
    ownApples=0;
    goneApples=0;
  }
  Apples(int my,int his)
  {
    ownApples=my;
    goneApples=his;
  }
  void display()
  {
    cout<<ownApples<<endl<<goneApples<<endl;
  }
  Apples operator+(Apples b)//here we can even return the sum integer of particular attribute.
  {
    Apples ab;
    ab.ownApples=b.ownApples+ownApples;
    ab.goneApples=b.goneApples+goneApples;
    return ab;
  }
};

int main()
{
  Apples a(20,30),b(40,50);
  Apples ab=a+b;//this expression automatically identifies that 1st variable is the one to be used, and the second variable is to be passed to the
                //operator function as an argument. (ab) recieves the value defined by the operator function and here it is an object. Now this(ab) is
                //just a normal object to be used in whichever eay needed.
  ab.display();
}

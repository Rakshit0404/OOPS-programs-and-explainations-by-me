//Here we have implemented overloading of all shorthand operators and for *= and /=, we have defined friend functions.
//Now a friend function doesn,t take the argument of an object implicitly. Unlike operator overloading as a memebr function,
//we can't directly use the variable of the object inside the friend function without manually passing it.
//So we pass two arguments in friend dunction operator overloading. And we actually pass the reference not the object directly,
//to witness the change. This is generally preffered over member function as it can be friends with two or more classes.
#include<bits/stdc++.h>
using namespace std;
//note: remember that the positions of the variables cant be swapped meaning, object a += object b is
//not same as object b += object a.
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
  void display()
  {
    cout<<mark<<endl;
  }
  void operator+=(int num)
  {
    mark+=num;
  }
  void operator-=(int num)
  {
    mark-=num;
  }
  friend void operator*=(Marks&,int);//friend function declaration.
  friend void operator/=(Marks&,int);
};

void operator*=(Marks &m1,int num)
{
  m1.mark=m1.mark*num;
}
//here we can see that the object which has to be affected doesn't get passes implicitly because,
//a friend function is not specific to a class. It can be declared as a friend in multiple classes.
void operator/=(Marks &m1,int num)
{
  m1.mark=m1.mark/num;
}

int main()
{
  Marks m1(20);
  m1.display();
  m1+=60;
  m1.display();
  m1-=40;
  m1.display();
  m1*=2;
  m1.display();
  m1/=4;
  m1.display();
}

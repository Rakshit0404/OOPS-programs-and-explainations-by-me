//this program demonstrates the working of templates, which is used to make generic functions,
//and these functions can be used with all the basic data types.
#include<iostream>
using namespace std;

template<typename myType> void display(myType data)
{
  cout<<"you have passed "<<data<<" which is "<<" type of data"<<endl;
}

int main()
{
  int num=20;
  char name='r';
  float tairaak=2.13;
  display(num);//works with all athe data types.
  display(name);
  display(tairaak);
}

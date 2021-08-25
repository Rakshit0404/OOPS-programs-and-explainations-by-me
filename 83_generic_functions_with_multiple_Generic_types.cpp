//this program shows how to pass multiple generic type data types, to a generic function.
#include<iostream>
using namespace std;

template<typename T1,typename T2> void display(T1 x, T2 y)//now T1 and T2 both are two different data types. So we can pass anything.
{
  cout<<x<<" and "<<y<<endl;
}

int main()
{
  display("Rakshit",24);
  display("Rakshit","Srivastava");
  display(24.367,'k');
}

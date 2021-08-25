//this program is about passing multiple values to the generic tmeplate functions, and also returning values of generic type.
//meaning different return value for different data type also.
#include<iostream>
using namespace std;

template<typename T> void display(T,T);//funtion prototyping with tmeplate classes.

int main()
{
  display(10,20);
  display("Rakshit","Srivastava");
  display(2.134,997.54);

  cout<<max(10,20)<<endl;
  cout<<max("max","min")<<endl;
  cout<<(2.34,2.13)<<endl;
}

template<typename T> void display(T x,T y)//both x and y should be of same type. all the template class type data, should be of the same type.
{
  cout<<"X is "<<x<<" and Y is "<<y<<endl;
}

template<class T> T max(T x, T y)//in this function, the return type is also of template type.
{
  return x > y?x : y;
}

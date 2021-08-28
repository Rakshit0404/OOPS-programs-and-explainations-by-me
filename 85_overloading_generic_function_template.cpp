//this demonstrates the overloading of a generic function with another generic function itself.
#include<iostream>
using namespace std;
int main()
{
  whatYougot(23);
  whatYougot("Rakshit",20);
}
template<typename T> void whatYougot(T x){//see that the no. of parameters is the thing that differentiates the overloaded generic functions.
  cout<<"This a single parameter generic function"<<endl;
  cout<<"And it has got only "<<x<<endl;
}
template<typename T> void whatYougot(T x, T y){
  cout<<"This is the two argument generic function talking"<<endl;
  cout<<"And it has got "<<x<<" and "<<y<<endl;
}

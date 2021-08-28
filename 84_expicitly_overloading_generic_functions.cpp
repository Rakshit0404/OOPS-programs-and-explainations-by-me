//We can overload generic functions with normal functions as per our use.
//Just like we did t for class members.
#include<iostream>
using namespace std;
template<typename T>void whatYouGot(T);
template<> void whatYouGot<char>(char);
void whatYouGot(int);
int main()
{
  whatYouGot("RAkshit");
  whatYouGot(20);
  whatYouGot(23.657);
  whatYouGot('j');
}

void whatYouGot(int n)
{
  cout<<"I got this integer type "<<n<<endl;
}

template<typename T>void whatYouGot(T x)
{
  cout<<"I got this generic type "<<x<<endl;
}

template<> void whatYouGot<char>(char a)//this is also a syntax to overload the generic functions. Just the same as normal functions.
{
  cout<<"I got this char type "<<a<<endl;
  cout<<"This is a new kind of syntax"<<endl;
}

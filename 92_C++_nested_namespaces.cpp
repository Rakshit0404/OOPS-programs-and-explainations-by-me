//the program explains how to use nested namespaces.
#include<iostream>
using namespace std;

namespace one{
  int i;
  namespace two{
    int j;
  }
}

int main()
{
  one::i=10;
  one::two::j=20;

  using namespace one;
  using namespace two;//this statement is inaccessible is we dont use namespace one before two, as two is nested inside one.

  cout<<i<<" and "<<j<<endl;
}

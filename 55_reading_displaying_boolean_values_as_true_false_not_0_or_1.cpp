#include<bits/stdc++.h>
using namespace std;
int main()
{
  bool boolvalue;
  cin>>boolvalue;
  cout<<boolvalue<<endl;
  //this takes in and prints 0 & 1.

  cin.setf(ios::boolalpha);//this takes input as true false string and outputs 0 & 1.
  cin>>boolvalue;
  cout<<boolvalue<<endl;

  cout.setf(ios::boolalpha);
  cin>>boolvalue;
  cout<<boolvalue<<endl;

  //remove
  cin.unsetf(ios::boolalpha);
  cout.unsetf(ios::boolalpha);

  //directly use boolalpha flag
  cin>>boolalpha>>boolvalue;
  cout<<boolalpha<<boolvalue;
  //this method takes input and prints output both in true false string.
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
  //shows sign of positive numbers
  cout.setf(ios::showpos);
  cout<<100<<endl;
  cout<<-65<<endl;
  cout<<78<<endl<<endl;
  //
  cout.unsetf(ios::showpos);//statement used to unset a flag.
  //shows decimal places of float numbers
  cout.setf(ios::showpoint);
  cout<<100.1<<endl;
  cout<<10.0/3.0<<endl;
  cout<<40.34<<endl<<endl;
  //
  cout.unsetf(ios::showpoint);
  //to set multiple flags at a time
  cout.setf(ios::showpos | ios::showpoint);//this sets both flags to the cout.
  cout.unsetf(ios::showpos | ios::showpoint);//this unsets all

  //to set multiple flags at a time, there is one more method
  auto ourflags=ios::showpos | ios::showpoint | ios::showbase;

  cout.flags(ourflags);//the flags funtion is provided similar to set and unset funtion.
  cout<<100.1<<endl;
  cout<<10.0/3.0<<endl;
  cout<<40.34<<endl;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
  string s("Rakshit Srivastava");//default initialize the string
  cout<<s<<endl;

  s.append(" rocks");//add to a stirng end
  cout<<s<<endl;

  s.insert(0,"Mr ");//inset anywhere in between
  cout<<s<<endl;

  s.erase(2,8);//erase any part of the string
  cout<<s<<endl;

  return 0;
}

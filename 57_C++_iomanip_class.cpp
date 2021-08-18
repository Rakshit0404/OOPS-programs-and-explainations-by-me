//this is a program which shows usage of iomanip library which implements the funtion of the functions
//like precision, width and fill but not permanently. The members of this iomanip class can be used inline like
//the flags we used, eg-boolalpha, showpos, showpoint etc.
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
  cout<<"hi"<<endl;//endl is actually a member of iomanip class
  cout<<hex<<100<<endl;//print hexadecimal

  cout<<setw(10)<<setfill('@')<<left<<"Rakshit"<<endl;
  //////width//////fill///////left-flag//////////////
}

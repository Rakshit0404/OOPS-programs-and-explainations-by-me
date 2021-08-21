//this program demonstrates the usage of stringstream to convert string input to number.
#include<iostream>
#include<sstream>
using namespace std;
int main()
{
  string input;
  cout<<"Enter the String of numbers"<<endl;
  cin>>input;

  stringstream convert;//object of stringstream class to convert string to int and vice versa.
  int intform;
  convert<<input;//takes string input
  convert>>intform;//plainly converts to integer output.

  cout<<"String form: "<<input<<endl;
  cout<<"Integer form: "<<intform<<endl;
}

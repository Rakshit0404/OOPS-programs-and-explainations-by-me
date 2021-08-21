//This is an application of stringstream of the sstream class.
#include<iostream>
#include<sstream>
using namespace std;
int main()
{
  int input;
  cout<<"Enter the number form"<<endl;
  cin>>input;
  stringstream convert;//this object will be used to pass values between variables.
  string stringform;

  convert<<input;//here we take the input from the varible.
  convert>>stringform;//here we copy the string form of the variable into another string variable.

  cout<<"number form: "<<input<<endl;
  cout<<"String form: "<<stringform<<endl;
}

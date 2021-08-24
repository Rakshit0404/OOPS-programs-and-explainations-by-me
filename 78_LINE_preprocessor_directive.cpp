//#line preprocessor directive is used to change the values of the predefined macros that are __LINE__ and __FILE__.
#include<iostream>
using namespace std;
int main()
{
  cout<<"Current line is "<<__LINE__<<endl;
  cout<<"Current file is "<<__FILE__<<endl;

  #line 1000 "Rakshit.txt"
  cout<<"Current line is "<<__LINE__<<endl;//now the line is 1000 for all cout<<__LINE__ from now on.
  cout<<"Current file is "<<__FILE__<<endl;//the file name is Rakshit.txt from here on.
}

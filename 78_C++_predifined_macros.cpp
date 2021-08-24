#include<iostream>
using namespace std;
int main()
{
  cout<<"Current line is "<<__LINE__<<endl;//line of this statement
  cout<<"Current file path is "<<__FILE__<<endl;//file path
  cout<<"Date of compilation of source code to object is "<<__DATE__<<endl;//complile date
  cout<<"Compile time is "<<__TIME__<<endl;//compile time
  cout<<"Standard C++ code "<<__STDC__<<endl;//if our compiler accepts only standard c & c++ codes nad doesnt contain other extentions
  cout<<"standerd c plus plus confirming "<<__cplusplus<<endl;//if compiler is confirsming to standard c++ or not. If yes returns 6 digit number else less than 6 digits.
}

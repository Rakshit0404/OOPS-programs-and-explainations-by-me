//#ifdef checks if macro is defined
//#ifndef checks if macro is not defined
#include<iostream>
using namespace std;
#define RAKSHIT 1
#define SAKSHI 2
int main()
{
  #ifdef RAKSHIT//checks if RAKSHIT is defined.
  {
    cout<<"Rakshit is defined"<<endl;
  }
  #else
  {
    cout<<"Rakshit is not defined"<<endl;
  }
  #endif//this should be used after every combination of macros if, ifdef, ifndef, elif blocks
  #ifndef SAKSHI//checks if SAKSHI is not defined.
  {
    cout<<"Sakshi is not defined"<<endl;
  }
  #else
  {
    cout<<"Sakshi is defined"<<endl;
  }
  #endif//this should be used after every combination of macros if, ifdef, ifndef, elif blocks
}

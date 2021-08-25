//4 conditional macros are present, namely #if, #elif, #endif, #else
//#if and #elif are used for giving conditions
//#else for remaining possiblities
//#endif for ending the macros if block.
//Remember this runs during complile time and not during the execution time.
#include<iostream>
using namespace std;
#define WINDOWS 1
#define MAC 2
#define LINUX 3
#define OS LINUX
int main()
{
  #if OS==WINDOWS
  {
    cout<<"Its a windows "<<WINDOWS<<endl;
  }
  #elif OS==MAC
  {
    cout<<"Its a Mac "<<MAC<<endl;
  }
  #else
  {
    cout<<"Its obviously a Linux "<<LINUX<<endl;
  }
  #endif//this ends the block, it should be compulsarily written

  cout<<"Ha Ha Ha Ha Ha Ha Ha Ha Ha"<<endl;
}

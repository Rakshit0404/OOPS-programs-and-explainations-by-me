//undef is used to undefine a macro if it is already defiend
#include<iostream>
using namespace std;
#define RAKSHIT 2
int main()
{
  #ifdef RAKSHIT
  {
    cout<<"Rakshit was defined"<<endl;

    #undef RAKSHIT
                  //here RAKSHIT gets undefined
    #ifdef RAKSHIT
    {
      cout<<"Rakshit is still defined"<<endl;
    }
    #else
    {
      cout<<"AND GOT UNDEFINED"<<endl;
    }
    #endif//this is to close the inside if else block 
  }
  #else{
    cout<<"Rakshit was not defined"
  }
  #endif
}

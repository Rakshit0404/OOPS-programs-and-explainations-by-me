//this program as standard parameter passing in generic funtions.
#include<iostream>
using namespace std;
template<typename type> void display(type, int);
int main()
{
  display("Rakshit",20);
}

template<typename type> void display(type val, int naya){
  for(int i=0;i<naya;i++)
  {
    cout<<val<<" ";
  }
}

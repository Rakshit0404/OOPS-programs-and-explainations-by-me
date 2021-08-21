#include<iostream>
#define ABS(number)((number)>0?number:-number)//this is a basic abs function using #define function.
#define GREAT(number,num)((number>num)?number:num)

using namespace std;
int main()
{
  cout<<ABS(-2)<<endl;
  cout<<GREAT(100,400)<<endl;
}

#include<iostream>
using namespace std;

#include "Person.h"//here the header file has been included.

Person::Person()//the declared fucntions and variables inside the class in the header files have been defined here
{
  cout<<"Constructor ran"<<endl;
}
void Person::display()//and here.
{
  cout<<"Kya display"<<endl;
}

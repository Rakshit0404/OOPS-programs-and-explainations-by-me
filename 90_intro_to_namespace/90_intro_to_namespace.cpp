//namespaces are similar to scopes, the variable arent available outside the namesoace.
//here in file 1 and 2, we have variables and functions of same name which is causing a conflict.
//to solve this we use namespace.
#include<iostream>
using namespace std;

#include "file1.cpp"
#include "file2.cpp"

int main()
{
  one::display();
  two::display();
}

using namespace one;
using namespace two;//these are also the methods to include the variables in the file, but it will again cause collisions.
                    //so we specify it one by one using scope resolution.

//Remember that there are a lot of predefined classes for exceptions in c++, and the classses have subclasses to specifically point to the errors.
#include<iostream>
#include<stdexcept>//This is the header to include and use the standard c++ exception classes.
using namespace std;
int main()
{
  int a=10,b=0,c;

  try{
    if(b==0)
    {
      throw runtime_error("divided by zero");
    }
    c=a/b;//error statement
    cout<<c<<endl;
  }
  catch(runtime_error &err)
  {
    cout<<"exception encountered"<<endl;
    cout<<err.what()<<endl;//err.what is a member funtion of the class runtime error. and the object err(here) can use the method
                           //to print the problem statement
  }
}

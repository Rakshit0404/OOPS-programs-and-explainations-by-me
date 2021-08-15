//this program explains how to make nested try catch blocks, one inside the other.
//We can even throw the same error from inner catch block, to the outer one with just a throw satatement.
#include<bits/stdc++.h>
using namespace std;
int main()
{
  try{
    try{
      throw "character error";
    }
    catch(const char *err)
    {
      cout<<"inner character exception ->"<<err<<endl;
      cout<<"exception thrown to outer"<<endl;
      throw;//this throws the error in the inner try block to the outer catch blocks.
    }
  }
  catch(const char *err)
  {
    cout<<"outer character exception ->"<<err<<endl;
  }
  catch(runtime_error &err)
  {
    cout<<"outer runtime error ->"<<err.what()<<endl;
  }
  catch(...)
  {
    cout<<"some unknown error"<<endl
  }
}

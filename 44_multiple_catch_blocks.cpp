//here we have used multiple catch statements, which handle exception differently, based on the argument passed by throw
//statement in try block.

#include<bits/stdc++.h>
using namespace std;
int main()
{
  int a;
  cin>>a;

  try{
    if(a==0)
    {
      throw runtime_error("runtime exception");
    }
    else if(a==10)
    {
      throw  "string exception";
    }
    else if(a==100)
    {
      throw 100;
    }
  }
    catch(runtime_error err)
    {
      cout<<err.what()<<endl;
    }
    catch(const char *err)
    {
      cout<<err<<endl;
    }
    catch(int num)
    {
      cout<<num<<" integer error"<<endl;
    }
  }

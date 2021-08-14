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
  }//we can even write catch statements before the universal catch block, to handle specific exceptions and let universal catch handle all others.
  // catch(int error)//example
  // {
  //   cout<<error<<endl;
  // }
  catch(...){//this 3 dot denotes that exception is handled for all cases. And the same statement gets printed for all of it.
    cout<<"some exception occured"<<endl;
  }
}

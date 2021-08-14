#include<bits/stdc++.h>
using namespace std;
int main()
{
  int a,b;
  cin>>a>>b;

  try{
    if(b==0)
    {
      throw "There is an error";
    }
    int c=a/b;
    cout<<c<<endl;
  }
  catch(const char *e){
    cout<<e<<endl;
  }
}

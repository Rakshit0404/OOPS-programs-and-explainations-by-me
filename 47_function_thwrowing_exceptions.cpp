//this program show how we can even catch an error if we put a funtion class in a try block, and throw statements inside the funtion.
//remember, all the possible return types should be mentioned in the arguments of throw() in the funtion.
#include<bits/stdc++.h>
using namespace std;

void test() throw(int,char,runtime_error){//here these parameters are compulsary
  throw 20;//comment out any two and test
  throw "Stirng error";
  throw runtime_error("runtime error");
}

int main(){
  try{
    test();
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

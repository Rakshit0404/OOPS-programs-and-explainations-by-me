//this shows the uses of anonymous spaces.
//if we use unNamed namespaces and we have multiple files included in our main cpp file,
//the namespace of both the files are actully unrelated. So declaration of one variable
//in anonymous namespace of one file in not related or accessible in namespace of any other included cpp file.
//the anonymous namespace is used to define variables inside a file which are local entities to only this particular file.
//these unanamed namespace variables can only be spanned inside this particular file.
//as well as anonymous namespace variables should have different name than the variables of global scope in the same file.
#include<iostream>
using namespace std;


namespace {//we can use anonymous namespace as many times as we want.
  int x;
  void display();
}

namespace{
  void display()
  {
     cout<<"x is "<<x<<endl;
  }
}

int main()
{
  x=25;
  display();
}

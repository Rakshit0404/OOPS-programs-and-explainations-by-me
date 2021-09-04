//inline keyword is used to make functions inside a anmespace directyly accesible outside, somewhat like a unNamed namespace but with a name.
//But if two namespace use inline and both are on the same level, then they should not have the functions and variables with the same name.
#include<iostream>
using namespace std;

namespace appVersion{
  namespace version1{
    void display()
    {
      cout<<"display functon of version 1"<<endl;
    }
  }
  namespace version2{
    void display()
    {
      cout<<"display function of version 2"<<endl;
    }
  }
  inline namespace version3{//this has inline so nowdisplay( method inide the version3 is directly accesible in appVersion.
    void display()
    {
      cout<<"display function of version 3"<<endl;
    }
  }

  namespace version3{//one we used inline keyword, we dont need to use, it again if we open another block of the same inline namespace anywhere else.
                     //and still the inner variable is available inside the parent namespace directly. 
    void whatsUp(){
      cout<<"this is the message from 2nd opening of version 3"<<endl;
    }
  }
}

int main()
{
  appVersion::display();
  appVersion::whatsUp();
}

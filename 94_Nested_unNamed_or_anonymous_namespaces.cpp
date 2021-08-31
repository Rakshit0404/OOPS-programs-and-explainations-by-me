//this program demonstartes the nesting of the namespaces. Multiple combinations of unnamed and named namespaces have been used.
#include<iostream>
using namespace std;

namespace{//nesting two unnamed namespaces.
  int x;
  namespace{
    void display(){
      cout<<x<<endl;
    }
  }
}

namespace one{//nesting unnamed namespace inside a named namespace.
  int y;
  namespace{
    void onedisplay()
    {
      cout<<y<<endl;
    }
  }
}

namespace{//nesting named namespaces inside the unnamed namespaces
  int z;
  namespace two{
    void twodisplay()
    {
      cout<<z<<endl;
    }
  }
}

int main()
{//these three sections of main() function use the 3 nested namespaces respectively. Do understand the usage of all the three.
  x=100;
  display();

  one::y=200;
  one::onedisplay();

  z=300;
  two::twodisplay();
}

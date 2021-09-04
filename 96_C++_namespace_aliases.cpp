//this carries the concept of namespace aliasing. Aliasing can be done in multiple ways and not just for name of a single namespace
#include<iostream>
using namespace std;

namespace verylargenamespacename{
  int x;
  namespace nestednamespace{
    void display()
    {
      cout<<x<<endl;
    }
  }
  namespace anothernested{
    void anotherdisplay()
    {
      cout<<"Another "<<x<<endl;
    }
  }
  namespace three = anothernested;//we can make aliases for nested namespaces inside the parent namespaces.
}

namespace one = verylargenamespacename;
namespace two = one::nestednamespace;//we can even alias one::nested

int main()
{
  one::x=100;
  two::display();
  one::three::anotherdisplay();
  return 0;
}

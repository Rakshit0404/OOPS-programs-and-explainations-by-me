//multiple namespaces can be used and declared inside the file and namespaces can also be defined at multiple places.
#include<iostream>
using namespace std;

namespace one{
  int i;
}

namespace two{
  int j;
}

namespace one{
  int k;
}

int main()
{
  one::i=10;
  two::j=20;
  one::k=30;

  using namespace one;
  using namespace two;

  cout<<i<<" and "<<j<<" and "<<k<<endl;
}

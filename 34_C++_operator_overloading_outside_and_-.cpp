//This is same as the previous program but here "-" operator has been overloaded
//and the operator function has been created outside the class, after declaring it inside the class.
#include<bits/stdc++.h>
using namespace std;

class Oranges{
  int ownOranges;
  int goneOranges;
public:
  Oranges()
  {
    ownOranges=0;
    goneOranges=0;
  }
  Oranges(int own,int gone)
  {
    ownOranges=own;
    goneOranges=gone;
  }
  void display()
  {
    cout<<ownOranges<<endl<<goneOranges<<endl;
  }

  Oranges operator-(Oranges);//Declaration
};

Oranges Oranges::operator-(Oranges b)//actual operator function
{
  Oranges ab;
  ab.ownOranges=ownOranges-b.ownOranges;
  ab.goneOranges=goneOranges-b.goneOranges;
  return ab;
}

int main()
{
  Oranges a(5,10),b(10,15);
  Oranges ab=a-b;
  ab.display();
}

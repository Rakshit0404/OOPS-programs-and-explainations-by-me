//here we use multiple generic data types in the same class
#include<iostream>
using namespace std;

template<class myType1, class myType2> class myClass{
  myType1 p1;
  myType2 p2;
  int integerp3;
public:
  myClass(myType1 x, myType2 y)
  {
    p1=x;
    p2=y;
    integerp3=100;
  }
  void whatYouGot(){
    cout<<"I got p1 "<<p1<<" and p2 "<<p2<<" and integerp3 is "<<integerp3<<endl;
  }
};

int main()
{
  myClass<int, string> Rakshit(20,"Rakshit");//both need to defined first while making the objects.
  myClass<float, char> Rajeev(20.349,'R');

  Rakshit.whatYouGot();
  Rajeev.whatYouGot();
}

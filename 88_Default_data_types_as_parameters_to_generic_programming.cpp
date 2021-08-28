//here we study about predefining the data types, in template, so while making the objects, we can either define the data types
//if we want to, or else it will only accept the default types mentioned by us.
#include<iostream>
using namespace std;

template<class myType1=string, class myType2=int> class myClass{//here data types are predefined.
  myType1 p1;
  myType2 p2;
public:
  myClass(myType1 p1, myType2 p2)
  {
    this->p1=p1;
    this->p2=p2;
  }
  void whatYouGot()
  {
    cout<<"I got p1 = "<<p1<<" and p2 = "<<p2<<endl;
  }
};

int main()
{
  myClass<>Rakshit("Rakshit",20);//This uses default data types.
  myClass<float,char> Rajeev(47.937,'e');//this changes both of them according to uage.
  myClass<float> Fardeen(30.2183,97);//This one overrides just the first data type, and leaves the second one to default value.
                                     //This can be done only for the first data type, as there is no way to define only the second one withou defining the first.

  Rakshit.whatYouGot();
  Rajeev.whatYouGot();
  Fardeen.whatYouGot();
}

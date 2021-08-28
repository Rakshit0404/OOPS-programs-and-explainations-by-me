#include<iostream>
using namespace std;

template<class myType>class myClass{
  myType p1;
public:
  myClass(myType p1)
  {
    this->p1=p1;
  }
  void display(){
    cout<<"data from generic class "<<p1<<endl;
  }
};

template<>class myClass<int>{
  int p1;
public:
  myClass(int p1)
  {
    this->p1=p1;
  }
  void display(){
    cout<<"data from specific class "<<p1<<endl;
  };
};

int main()
{
  myClass<string> Rakshit("Rakshit");
  myClass<int> Rajeev(20);

  Rakshit.display();
  Rajeev.display();
}

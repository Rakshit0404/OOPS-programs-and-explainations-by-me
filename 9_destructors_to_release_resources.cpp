#include<bits/stdc++.h>
using namespace std;

class Human{
private:
  int *age;
  string *name;
public:
  Human(int iage,string iname)
  {
    age=new int;
    name=new string;

    *name=iname;
    *age=iage;
  }
  void display()
  {
    cout<<"Hi i am "<<*name<<" and i am "<<*age<<" years old"<<endl;
  }
  ~Human()
  {
    delete name;
    delete age;
    cout<<"The variables are free"<<endl;
  }
};

int main()
{
  //using a object variable
  Human Rakshit(20,"Rakshit");
  Rakshit.display();

  //using an object pointer
  Human *Rajeev=new Human(20,"Rajeev");
  Rajeev->display();
  delete Rajeev;
  return 0;
}

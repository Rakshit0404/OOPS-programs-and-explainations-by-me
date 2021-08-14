#include<bits/stdc++.h>
using namespace std;

class Human{
private:
  int age;
public:
  void setAge(int age)
  {
    this->age=age;//here both the class variable and the parameter have the same name.
                  //if we use this keyword, this stores the address of the oject and it is a predefined variable
                  //given by c++, which can be used to point to members and methods of the object. So this->age
                  //refers to the member variable of the object
  }
  void showAge()
  {
    cout<<this->age<<endl;
  }
};

int main()
{
  Human Rakshit;
  Rakshit.setAge(20);
  Rakshit.showAge();
}

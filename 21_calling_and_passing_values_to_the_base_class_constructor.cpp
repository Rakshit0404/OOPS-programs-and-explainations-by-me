#include<bits/stdc++.h>
using namespace std;

class Father{
protected:
  int height;
public:
  Father(int h)
  {
    cout<<"Father class construtor was called"<<endl;
    height=h;
  }
};

class Mother{
protected:
  string skinColor;
public:
  Mother(string skin)
  {
    cout<<"Mother class construtor was called"<<endl;
    skinColor=skin;
  }
};

class Child:public Father,public Mother{
public:
  Child(int hei,string ski):Father(hei),Mother(ski)//using this line we pass the value to the father class
                            //First the child class id created. Then at the time of
                            //execution of its construtor, the value if "hei" is simultaneously
                            //passed to the father class and first the constructor of the father
                            //class is executed and then the base class.
                            //we can also assign height through this subclass but just to demonstrate the
                            //value passing, this is done.
  {
    cout<<"Child constructor called"<<endl;
  }
  void display()
  {
    cout<<"Height of the father is "<<height<<" and skin of mother is "<<skinColor;
  }
};

int main()
{
  Child Rakshit(6,"dark");
  Rakshit.display();
}

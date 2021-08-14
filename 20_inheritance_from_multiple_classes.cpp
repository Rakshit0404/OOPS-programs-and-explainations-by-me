#include<bits/stdc++.h>
using namespace std;

class Father{
public:
  int height;
  void askFather(){
    cout<<"I gave you my height"<<endl;
  }
};
class Mother{
public:
  string color;
  void askMother(){
    cout<<"I gave you my skin color"<<endl;
  }
};
class Kid:public Father,public Mother{
public:
  void askParents(){
    cout<<"I took it from my parents"<<endl;
  }
  void setColorandHeight(string icolor,int iheight)
  {
    color=icolor;
    height=iheight;
  }
  void display()
  {
    cout<<"My height is "<<height<<" and skin color is "<<color;
  }
};
//here we have defined 2 base classes and one subclass which is a sucbclass for both the base
//classes at the same time. This is known as multiple inheritance. WE can see that the object of
//Kid class can use the method of both the base classes.
int main()
{
  Kid Rakshit;
  Rakshit.setColorandHeight("brown",5);
  Rakshit.display();
  Rakshit.askFather();
  Rakshit.askMother();
}

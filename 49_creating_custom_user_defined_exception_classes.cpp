//this program implements two, things-
       //creating user defined exception classes
       //using try blocks using classes
#include<iostream>
#include<exception>
using namespace std;

class OverSpeed:public exception{//as an object of this class has to be thrown under try, this class has to inherit from exception class. Otherwise, it's object won't be thrown.
  int speed;
public:
  const char* what()
  {
    cout<<"stop overspeeding, you're not a train"<<endl;
  }
  void setSpeed(int speed)
  {
    this->speed=speed;
  }
  void getSpeed()
  {
    cout<<"speed is "<<speed<<endl;
  }
};

class Car{
  int speed;
public:
  Car()
  {
    speed=0;
  }
  void accelarate(int acc)
  {
    for(;;)//infinite loop
    {
      speed+=acc;
      cout<<"speed is "<<speed<<endl;
      if(speed>400)
      {
        OverSpeed fast;
        fast.setSpeed(speed);
        throw fast;
      }
    }
  }
};

int main(){
  Car RakshitsCar;
  try{
    RakshitsCar.accelarate(5);//here the accelarate function throw is error. So the catch block below catches it. This shows how can we use try catch across class and main.
  }
  catch(OverSpeed s)
  {
    s.what();
    s.getSpeed();
  }
}

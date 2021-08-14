#include<bits/stdc++.h>
using namespace std;
class Human{
protected:
  string name;
public:
  void setName(string iname)
  {
    name=iname;
  }
};
class Student:private Human{//this private declaration makes items under human inaccessible
                            //for  any further subclass of this class Student
public:
  void setStudentName(string iname)
  {
    name=iname;
  }
  void display()
  {
    cout<<name<<endl;
  }
};
class goodStudent:public Student{
  //here the member functions and variables of Human are not accessible because
  //goodstudent is a subclass of Student and Student is a private subclass of Human,
  //which makes all the things under Human inaccessible for goodStudent.
public:
  void setGoodStudentName(string iname)
  {
    //this setGoodStudentName() function cannot access setName() from human, so it
    //calls setStudentName() of Student, which in turn calls setName() for goodStudent class.
    setStudentName(iname);
  }
};
int main()
{
  goodStudent Rakshit;
  Rakshit.setGoodStudentName("Rakshit");
  Rakshit.display();
}

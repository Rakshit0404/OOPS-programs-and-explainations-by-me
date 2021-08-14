//public members of base class become protected in proteted subclass of the base class

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

class Student: protected Human{
public:
  void display()
  {
    cout<<name<<endl;
  }
  //as the setName function of base class is not available in main function, this
  //setStudentName() function will help us to set the name for objects of student class.
  void setStudentName(string iname)
  {
    setName(iname);
  }
};
int main()
{
  Student Rakshit;
  //Rakshit.setName("Rakshit"); cant be used here as Rakshit is the object of student class
  //and student class is a subclass of human but due to protected keyword(inheritance)
  //even the public methods and members of Human class act as a protected member for Student class objects.
  Rakshit.setStudentName("Rakshit");
  Rakshit.display();

  Human Rajeev;
  Rajeev.setName("Rajeev");//this is valid as now the class used to create the object
                           //is not the subclass but the base class,where the same function is public.
}

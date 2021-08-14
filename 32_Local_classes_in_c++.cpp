#include<bits/stdc++.h>
using namespace std;
void showStudent();
int main()
{
  showStudent();
  //her the object of the class pesent in the showStudent function cannot be used as it is out of scope here.
}
void showStudent()
{
  class Student{//This class is usable inside this function scope only and never outside.
                //This can only be used when this function is called from main and tasks
                //related to this class are executed inside this showStudent function only.
  public:
    string name;
    int age;

    void display()
    {
      cout<<name<<endl<<age<<endl;
    }
  };

  Student Rakshit;
  Rakshit.name="Rakshit";
  Rakshit.age=21;
  Rakshit.display();
}

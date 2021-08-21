#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;

class Person{
  char name[100];
  int age;
public:
  Person()
  {
    strcpy(name,"noname");
    age=0;
  }
  Person(char *name,int age)
  {
    strcpy(this->name,name);
    this->age=age;
  }
  void display(){
    cout<<"Hello I am "<<name<<" and I am "<<age<<endl;
  }
};
int main()
{
  Person Rakshit("Rakshit",20);

  fstream file("Rakshit.bin", ios::binary | ios::in | ios::out | ios::trunc);
  if(!file.is_open())
  {
    cout<<"Error opening the file"<<endl;
  }
  else{
    file.write((char *)&Rakshit,sizeof(Person));
    file.seekg(0);
  }
}

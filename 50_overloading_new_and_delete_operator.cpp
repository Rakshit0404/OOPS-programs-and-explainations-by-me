//this programs performs overloading of new and delete and methods of classes.
//Even though here, just for teaching, it has the same use as normal delete adn new,
//but this overloading can be used in a lot of different ways.
#include<bits/stdc++.h>
using namespace std;

class Student{
  string name;
  int age;
public:
  Student(){
    name="noname";
    age=0;
  }
  Student(string name, int age)
  {
    this->name=name;
    this->age=age;
  }
  void details()
  {
    cout<<"My name is "<<name<<" and I am "<<age<<endl;
  }
  void *operator new(size_t s)//size_t is the maximum size that can be alloted to a pointer.
  {
    void* ptr;
    ptr=malloc(s);
    if(!ptr)
    {
      bad_alloc b;//this bad_alloc is a pre defined exception class. 
      throw b;
    }
    return ptr;
  }
  void operator delete(void *ptr)
  {
    free(ptr);
    cout<<"freed"<<endl;
  }
};

int main()
{
  Student *Rakshit;
  try{
    Rakshit=new Student();//this line sends the size to the operator functon inside student class. AS student() comes after new, so it gets passed.
    cout<<"pointer created"<<endl;
    delete Rakshit;
  }
  catch(bad_alloc b)
  {
    cout<<b.what()<<endl;
  }
}

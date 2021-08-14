#include<bits/stdc++.h>
using namespace std;

class Human{
private:
  int age;
  string name;
public:
  Human(){
    cout<<"Default constructor"<<endl;
    age=0;
    name="Rakshit";
  }
  Human(string newname)
  {
    cout<<"Not Default constructor"<<endl;
    age=0;
    name=newname;
  }
  Human(int newage)
  {
    cout<<"Also not default constructors"<<endl;
    age=newage;
  }
  Human(string newname, int newage){
    cout<<"The last constructor"<<endl;
    age=newage;
    name=newname;
  }
  void display()
  {
    cout<<name<<" is "<<age<<" years old."<<endl;
  }
};

int main()
{//remember that we called constructor only at the beginning.
//Any declared constructor can only be called at the beginning with any overloaded method.
//Human Rakshit("Raj") is valid but Human Rakshit; Rakshit("Raj") is invalid.

  Human Rakshit;

  Human rajeev("andy",20);
  rajeev.display();

  return 0;
}

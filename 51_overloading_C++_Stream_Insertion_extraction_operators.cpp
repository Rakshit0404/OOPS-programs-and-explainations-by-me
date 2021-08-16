//Here we are overloading << and >> operators, and these cant be overloaded using a member function.
//We need a friend function because, in the member funtions, the variable before the operator in the int main(int argc, char const *argv[]) {
//is passed implicitly. But as cout and cin do not belong to our defined class, There is no implicit passing.
//Therefore cin and cout dont get recognized.

#include<bits/stdc++.h>
using namespace std;

class Person{
  string name;
  int age;
public:
  Person()
  {
    name="noname";
    age=0;
  }
  friend ostream& operator << (ostream&,Person&);
  friend istream& operator >> (istream&,Person&);
};

ostream& operator << (ostream& out,Person &p)
{
  out<<"My name is "<<p.name<<" and my age is "<<p.age<<endl;
  return out;//this return is compulsary, otherwise there is an ambiguity.
}
istream& operator >>(istream& in,Person& p)
{
  in>>p.name>>p.age;
  return in;//this return is compulsary, otherwise there is an ambiguity.
}

int main()
{
  Person Rakshit;
  cout<<"Enter your name and age\n"<<endl;
  cin>>Rakshit;
  cout<<Rakshit;
}

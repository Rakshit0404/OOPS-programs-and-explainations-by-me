//This program shows the usage of generic classes. Here we define the template before the start of the class and then use
//the data types inside the class whenever needed. Remember that just like functions, two data of the same template cant be of two different data types until
//we make two different types of data.
#include<iostream>
using namespace std;

template<typename myType> class myClass{
  myType type1;
  myType type2;
public:
  myClass(myType t1, myType t2)
  {
    type1=t1;
    type2=t2;
  }

  void displayMethod()
  {
    cout<<"The first data is "<<type1<<" and the second data is "<<type2<<endl;
  }
};

int main()
{
  myClass<int> numbers(25,46);
  myClass<string> names("Rakshit","Sakshi");//even in generic classes we can't pass two differnt data types in the same function.
  myClass<char> characters('a','b');

  numbers.displayMethod();
  names.displayMethod();
  characters.displayMethod();
}

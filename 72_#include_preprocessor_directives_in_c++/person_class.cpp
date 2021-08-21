//this is kinda similar to templating.
class Person{
  string name;
  int age;
public:
  Person(string name,int age)
  {
    this->name=name;
    this->age=age;
  }
  void whoareyou()
  {
    cout<<"I am "<<name<<" and I am "<<age<<endl;
  }
};

#ifndef PERSON_H//this line is to check if the variable is not defined,
#define PERSON_H//if it is not defined, we define it and then class definition is done.
                //this has been dont to avoid multiple declaration of the same classes.

class Person{
public:
  Person();
  void display();//if we make headers to include in cpp files and we define a class, its compulsary to declare the member functions.
protected:
private:
};

#endif

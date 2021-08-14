#include<bits/stdc++.h>
using namespace std;
class Human{
    private:
    string name;
    int age;
    public:
    Human()
    {
        name="Rakshit";
        age=20;
        cout<<"Constructor is called as soon as the program creates object for the class"<<endl;
        // constructors cant be private as they get executed on declaration of object and if object is declared in main
        // private items are inaccessible
        // The contructors cant be called manually
    }
    void display()
    {
        cout<<name<<" is "<<age<<" years old";
    }
};
int main(){
    Human Rakshit;

    Rakshit.display();
}
#include<bits/stdc++.h>
using namespace std;

class Human{
public:
    string name;
    void introduce();
};
/* using scope resolution operator we can declare member funtions outside the class using the name of the class*/
/*note that variables can be worked with outside the class without making an object*/
void Human::introduce(){
    cout<<"My name is "<<name;
}

int main()
{
    Human Rakshit;
    string rak;
    cin>>rak;
    Rakshit.name=rak;
    Rakshit.introduce();
}

/*.\definingmemberfnctionsoutsideclass to run*/

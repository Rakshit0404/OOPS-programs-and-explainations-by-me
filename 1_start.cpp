#include<iostream>
using namespace std;
class humanbeing{
    public:
    string name;
        void display(){
            cout<<"im a human being named "<<name;
        }
};

int main()
{
    humanbeing rakshit;
    rakshit.name="Rakshit";
    rakshit.display();
    return 0;
}

#include<bits/stdc++.h>
using namespace std;

class Humanbeing{
    public:
        string name;

        void introduce()
        {
          if(name=="chutiya")
          {
            cout<<"Bunty toh chutiya hai"<<endl;
            return ;
          }
          cout<<"hi "<<name<<endl;
        }
};

int main()
{
    /*this static declaration saves object in the stack memory*/
    Humanbeing rakshit;
    rakshit.name="rakshit";
    rakshit.introduce();

    /* this dynamic declaration saves object in the heap memory*/
    Humanbeing *bunty=new Humanbeing();
    bunty->name="chutiya";
    bunty->introduce();
}

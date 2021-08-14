#include<bits/stdc++.h>
using namespace std;

class Human{
    private:
    int age;//this age cant be accessed by any function
            //outside this class
    int getsecondage(){
        return age-5;//this function also
    }  

    public:
    void get_info(){
        cout<<"My age is "<<getsecondage();
    }
    void set_info(int aage){
        age=aage;
    }

};

int main(){
    Human Rakshit;
    Rakshit.set_info(21);
    Rakshit.get_info();
}
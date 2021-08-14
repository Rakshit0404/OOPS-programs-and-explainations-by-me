  #include<bits/stdc++.h>
  using namespace std;

  class Human{
  public:
    Human()
    {
      cout<<"Constructor called"<<endl;
    }
    ~Human(){//no parameters can be passed in destructors
      cout<<"Destructor called"<<endl;
    }
  };


  int main()
  {
    Human *Rakshit;
    Rakshit=new Human();
    delete Rakshit;
    return 0;
  }

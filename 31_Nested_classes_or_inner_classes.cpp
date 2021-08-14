 #include<bits/stdc++.h>
 using namespace std;

class Human{
public:
  string name;

  class Address{//This class is inside the scope of the class Human. So This
                //class can't be used outside the class Human directly. The
                //object "addr" of class address gets automatically created
                //along with declaration of object of Human class in other functions.
  public:
    int houseno;
    string city;
    string country;
  };

  Address addr;
  void showAddress()
  {
    cout<<name<<endl<<addr.houseno<<endl<<addr.city<<endl<<addr.country<<endl;
  }
};

 int main()
 {
   Human Rakshit;
   Rakshit.name="Rakshit";
   Rakshit.addr.houseno=4;
   Rakshit.addr.city="Raichur";
   Rakshit.addr.country="India";
   Rakshit.showAddress();

   Human::Address ad;//In this way we can create an object of the nested class in main directly and now use it as a normal class even though it is
                     //a nested class.
 }

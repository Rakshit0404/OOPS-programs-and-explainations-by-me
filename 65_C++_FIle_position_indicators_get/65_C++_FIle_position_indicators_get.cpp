//more about get position, the funtions available to get info and set new positions.
//This demonstartes only read positions.
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
  ifstream file("Rakshit.txt",ios::in);
  if(!file.is_open())
  {
    cout<<"ERROR opening the file."<<endl;
  }
  else{
    cout<<"Reading from the file"<<endl;
    cout<<"Current postion: "<<file.tellg()<<endl;//tellg() is a function used to get the current read position.
    file.seekg(2);//this function is used to change and reach to a new position defined by the argument passed.
    cout<<"New position: "<<file.tellg()<<endl;
    string text;
    while(file.good())//we already know file.good().
    {
      getline(file,text);
      cout<<text<<endl;
    }
  }
}

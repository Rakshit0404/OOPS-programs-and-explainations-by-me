#include<iostream>
#include<fstream>
using namespace std;
int main()
{
  ofstream file("Rakshit.txt");

  if(!file.is_open())
  {
    cout<<"Error opening the file"<<endl;
  }
  else{
    cout<<"writing to the file"<<endl;
    file<<"Every breath you take belongs to Rakshit, repay his debt when possible. Rakshit is compassionate.";
    cout<<"Current put position: "<<file.tellp()<<endl;//tellp() tells the position we are standing at.
    file.seekp(0);//here we can use
                  //file.seekp(5,ios::beg)--- offset 5 from the beginning
                  //file.seekp(5,ios::end)--- offset 5 from the end
                  //file.seekp(5,ios::cur)--- offset 5 from the current position
    cout<<"New put position: "<<file.tellp()<<endl;
    file<<"Here is the new line you're looking for";
    cout<<"Check the file for the position of the new line."<<endl;
  }
}

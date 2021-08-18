//reading from an external file
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
  ifstream file;
  file.open("Rakshit.txt");//Here we put the adress of the file.
                           //If we dont specify flags, c++ uses default flags on the file.
  if(!file.is_open())
  {
    cout<<"Error in opening the file"<<endl;//if there is no such file, we get the error message.
  }
  else{
    cout<<"Reading from the file"<<endl;
    string line;
    while(file.good())//this is a method of the ifstream class, which looks id there are multiple lines or not
                      //and accordingly, returns true false accordingly. There are other such methods such as bad() etc.
    {
      getline(file,line);
      cout<<line<<endl;
    }
  }
}

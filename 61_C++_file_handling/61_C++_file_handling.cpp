//this file explains file handling, about fstream class etc. 
#include<iostream>
#include<fstream>
using namespace std;

int main()
{
  fstream file;//object of fstream class used to open a file.
  file.open("Rakshit.txt",ios::in | ios::out | ios::trunc);
  //ios::in red from file, default mode for ifstream class
  //ios::out write to file, default mode for ofstream class
  //ios::trunc create the file if doesn't exist. But overrides and clears the previous one. So be careful.

  if(!file.is_open())
  {
    cout<<"error in accessing the file"<<endl;
  }
  else{
    cout<<"file Opened"<<endl;
    file.close();
  }

}

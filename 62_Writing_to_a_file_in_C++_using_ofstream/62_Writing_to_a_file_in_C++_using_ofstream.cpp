//here we are making a txt file in the same directory through trunc flag, and then writing content to the file.
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
  ofstream file("Rakshit.txt");//short method to directly make a file, this consists of trunc by default. Remember that this also clears the previous text of the file.

  if(!file.is_open())
  {
    cout<<"Error opening the file"<<endl;
  }
  else{
    file<<"Rakshit Srivastava is your boss, accept it. Inspiration from Daisy Shah."<<endl;//here the object of ofstream class is used in as the object to print int he file.
    file<<"Kaisa laga mera majak :)"<<endl;                                                //these line get added to the txt file.
    file.close();
    cout<<"Successfully written to the file, open and check out"<<endl;
  }
}

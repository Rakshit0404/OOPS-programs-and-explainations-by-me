//here we have an fstream class variable because, we need to observe the effect of both get and put, as there value are always the same.
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
  fstream file("Rakshit.txt",ios::in | ios::out | ios::trunc);

  if(!file.is_open())
  {
    cout<<"Error opening the file"<<endl;
  }
  else{
    cout<<"Read position: "<<file.tellg()<<endl;
    cout<<"Write position: "<<file.tellp()<<endl;
    file.seekg(5);//here is a possible problem, the get and put, both work due to the same pointer.
    cout<<"Read position: "<<file.tellg()<<endl;//Due to which the read write position is always same.
    cout<<"Write position: "<<file.tellp()<<endl;//So be careful while reading and writing whether you are at the correct position,
  }                                              //using, ios::beg, ios::end, ios::cur, inside along with the offset value of the seekp and seekg functions.
}

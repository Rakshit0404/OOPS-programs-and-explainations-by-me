//this is a program that explains binary file reading.
//Remember we use a separate binary mode to read binary files because, the line end is defined by
//single carriage or line feed in binary files, which is differently used by different people.
//So using normal file stream would detect carriage and feed symbol as plain text and wrongly affect the file.
#include<iostream>
#include<fstream>
#include<cstring>//to use strlen, strcpy etc.
using namespace std;
int main()
{
  char arr[100];

  strcpy(arr,"Pray to Rakshit Srivastava, He listens to everybody.");
  fstream file("Rakshit.bin",ios::binary| ios::in| ios::out| ios::trunc);
  if(!file.is_open())
  {
    cout<<"Error opening the binary file"<<endl;
  }
  else{
    int length=strlen(arr);
    for(int i=0;i<length;i++)
    {
      file.put(arr[i]);//this is a prdefined function for binary mode. This prints one character at a time in ninary files.
    }
  }
  file.seekg(0);//bringing the pointer to the start.
  char a;
  while(file.good())
  {
    file.get(a);//This function is predefined in binary mode, which takes one character at a time and puts it in the variable passed as an argument.
    cout<<a;
  }
  file.close();
}

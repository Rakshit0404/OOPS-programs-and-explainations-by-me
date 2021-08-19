#include<iostream>
#include<fstream>
using namespace std;
int main()
{
  fstream file("Rakshit.txt",ios::in | ios::out | ios::app);//the app mode(append mode) also acts like trunc mode and creates a file itself.
                                                            //while using append, the pointer is at the end of the text in the file. Any new
  if(!file)//this is also a method to check for file.       //text gets added to the end of file because of using append. This does not delete or clear the contents of the old file.
  {
    cout<<"Error opening the file"<<endl;
  }
  else{
    cout<<"writing to the file"<<endl;
    file<<"Rakshit Srivastava is self obsessed"<<endl;
    file<<"obviously joking"<<endl;
    //After running the program twice, the text got repeated in the text file, because this has append mode also.
    string str;
    file.seekg(0);//we have to pointers 'get' and 'put' which return the read and write positions respectively. By default both are at the end.
                  //So we use 'seekg(0)' before reading to bring it to the starting line.
    while(file.good())
    {
      getline(file,str);
      cout<<str<<endl;
    }
    file.close();
  }
}

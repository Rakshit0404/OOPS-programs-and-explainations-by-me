//Preprocessor directives are peices of codes which are generally written in other files and
//compiled along with the compilation of the program. these are included int the file using #include
//#include<...> tells that the file has to be searched in a specified compliler directory.
//#include"..." tells that search the file at mentioned directory.
#include<iostream>
using namespace std;
#include "person_class.cpp"//this line is used to include the file in the program.
//do not write this include statement before "namespace", as the file might be using the funtions of namespace
int main()
{
  Person Rakshit("Rakshit",20);
  Rakshit.whoareyou();
}

//this program defines the #define preprocessor directive in c++.
//as we can see, it can be used as any data type. AS well as strings.
//remember macros arent the fastest, so in program where we need lesser time complexity, these are avoided.
#include<iostream>
#define NAME "Rakshit"
#define ONE 1
#define TWO ONE+ONE
#define THREE TWO+ONE//these macros use prviously defined macros, and obtain the value every time it is used in c++.
#define PARAGRAPH "Rakshit greets you, get your ass up \
and start exercising \
for a fresh morning"
//for writing sentences that come to the nest line, we break the line with "\" and now we can write int the next line too
using namespace std;
int main()
{
  cout<<"Hello, My name is "<<NAME<<endl;
  cout<<"Here are the numbers "<<ONE<<"   "<<TWO<<"   "<<THREE<<endl;
  cout<<PARAGRAPH<<endl;
}

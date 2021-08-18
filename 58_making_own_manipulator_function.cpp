//this program implements the creation of manipulator functions, and these manipulator
//functions don't take any arguments. There are manipulators which take argument,
//but it is difficult to make them.

#include<bits/stdc++.h>
using namespace std;

ostream& wowline(ostream& out)
{
  cout<<"Thats a really nice name ----> ";
  return out;//remember that passing the parameter is a must to further continue the statement
             //in the main otherwise, the further variable wont get printed.
}

istream& nameline(istream& in)
{
  cout<<"Enter the name maaaaaan"<<endl;
  return in;//remember that passing the parameter is a must to further continue the statement
            //in the main otherwise, the further variable wont get printed.
}

int main()
{
  string name;
  cin>>nameline>>name;
  cout<<wowline<<name;
}

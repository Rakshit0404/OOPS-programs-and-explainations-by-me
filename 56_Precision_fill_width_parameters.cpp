//this program is to learn precision, fill and width.
#include<bits/stdc++.h>
using namespace std;

int main()
{
  //precison(), is a method of ostream class, which rounds the number to the defined value.
  //this only rounds floating point numbers. Doesnt affect integers.
  cout.precision(4);
  cout<<123.4567<<endl;
  cout<<1234567<<endl;

  //width(), this is the width method and this is used to equally space out the printed values, can be used in tables.
  //every time something gets printed, we have to apply this method separately before printing anything.
  //Also this works for every print, not limited to a particular data type.
  cout.width(10);
  cout<<10<<endl;
  cout.width(10);
  cout<<10<<endl;
  cout.width(10);
  cout<<"Rakshit"<<endl;
  cout.width(10);
  cout<<"Rakshit is smart"<<endl;//doesn't work with string with width more than defined value.

  //fill()
  cout.width(30);
  cout.fill('%');//this fills the extra space created due to the more width using the defined symbol
  cout<<"Its rakshit all over"<<endl;//output is %%%%%%%%%%Its rakshit all over.
  //as we see that the empty space due to width appears on the left, to shift the space to the, right,
  //we move the text to the left.
  cout.setf(ios::left);
  cout.width(30);
  cout.fill('%');
  cout<<"Its rakshit all over"<<endl;//output Its rakshit all over%%%%%%%%%%.
}

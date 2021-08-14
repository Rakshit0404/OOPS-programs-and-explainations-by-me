//Remember that in this special operators, none of them can be made through friend funtion
#include<bits/stdc++.h>
using namespace std;

class Marks{
  int subjects[3];
public:
  Marks(int s1,int s2, int s3)
  {
    subjects[0]=s1;
    subjects[1]=s2;
    subjects[2]=s3;
  }

  int operator[](int pos)
  {
    return subjects[pos];
  }
};

int main()
{
  Marks Rakshit(87,95,92);
  cout<<Rakshit[0]<<endl<<Rakshit[1]<<endl<<Rakshit[2]<<endl;
}

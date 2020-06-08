#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;

  cin>>n;      // input number

  for(int i=1;i<=10;i++) //loop from 1 10 10
  {
    cout<<n<<"x"<<i<<"="; // eg. 3x1=3
    cout<<n*i;
    cout<<endl; // For new line
  }


  return 0;
}

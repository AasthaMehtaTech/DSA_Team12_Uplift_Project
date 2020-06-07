#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;

  for(int i=1;i<=n;i++) // Outer loop for rows. It runs from 1 to n(the given no.)
  {
    for(int j=1;j<=i;j++) //inner loop for columns. It runs from 1 to i(eual to the outer loop)
    {
      cout<<"*"<<" ";
    }

    cout<<endl;   // For line change after each row.
  }

  return 0;
}

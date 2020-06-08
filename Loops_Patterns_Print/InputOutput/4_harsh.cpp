#include<bits/stdc++.h>
using namespace std;
int main()
{

  int n;
  cin>>n;

  for(int i=n;i>=1;i--) // Outer loop for rows. It runs from n to 1 (value decreasing)
  {
    for(int j=1;j<=i;j++) //inner loop for columns. It runs from 1 to i(value of outer loop)
    {
      cout<<"*"<<" ";
    }

    cout<<endl;   // For line change after each row.
  }

  return 0;
}

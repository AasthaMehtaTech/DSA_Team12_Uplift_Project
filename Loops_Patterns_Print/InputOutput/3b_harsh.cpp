#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
cin>>n;

for(int i=1;i<=n;i++) // Outer loop for rows
{
  //first inner loop
  for(int j=i;j<=n;j++) // from i to n for sapce before *
  {
    cout<<" ";
  }

  // second inner loop
  for (int j=1;j<=i;j++) // For stars and after spaces
  {
    cout<<"* ";
  }

  cout<<endl;
}



  return 0;
}

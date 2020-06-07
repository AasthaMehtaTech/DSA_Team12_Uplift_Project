#include<bits/stdc++.h>
using namespace std;
int main()
{


  int n;
  cin>>n;

  if(n%2==0)
  {
    cout<<"Please enter odd number";
  }
  else
  {

    // For upper half part of pattern

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



    // For lower half part of pattern
    int s;
    s=1; // counter for spaces
    for(int i=n-1;i>=1;i--)  // reverse loop which iterates n-1 times
    {
      for(int j=0;j<=s;j++)  // from 0 to counter for printing sapces
      {
        cout<<" ";
      }

      for(int j=1;j<=i;j++) // For stars and after spaces
      {
        cout<<"* ";
      }
      s++;
      cout<<endl;
    }


  }




  return 0;
}

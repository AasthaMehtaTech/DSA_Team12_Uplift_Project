// Example program
#include <iostream>
#include <string>
using namespace std;
int main()
{
  int n,t;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++)
  {
      cin>>a[i];
  }
  cin>>t;
  for(int i=0;i<n;i++)
  {    for(int j=i+1;j<n;j++)
            
        if(a[i]+a[j]==t)
          cout<<a[i]<<" "<<a[j];
            cout<<"\n";
      
  }

  
}

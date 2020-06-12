
#include <iostream>
using namespace std;

int main()
{
 
 int n,x=-1,y=1,z;
 cin>>n;
 for(int i=0;i<n;i++)
 {
     
  for(int j=0;j<=i;j++)
 {
       z=x+y;
     x=y;
     y=z;
 cout<<y<<" ";
  }
  cout<<"\n";
}
}

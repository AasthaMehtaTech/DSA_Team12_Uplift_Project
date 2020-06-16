// Example program
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
     for(int i=0;i<n*n;i++)
     {
      if(n==i*i)
      {
      cout<<i;
      return 0;
          
      }
      
      else
      {
      cout<<floor(sqrt(n));    
     return 1;
         
     }

    
    }
}
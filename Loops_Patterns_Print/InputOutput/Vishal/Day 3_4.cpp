#include <iostream>
#include<cstdlib>
using namespace std;

int main()
{
    int n;
    cin>>n;
    long x[n];
    for(int i=0;i<n;i++)
    {
        cin>>x[i];
    }
   long d[n];
   long max=0;
    
    for(int i=0;i<n-1;i++)
    {
              d[i]=abs(x[i+1]-x[i]);
            }
            max=d[0];
    for(int i=0;i<n-1;i++)
    {
       if(d[i]>max)
       max=d[i];
    
    }
    cout<<max;
   return 0;
}

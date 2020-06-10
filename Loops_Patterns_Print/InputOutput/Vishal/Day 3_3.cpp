#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int x[n];
    for(int i=0;i<n;i++)
    {
        cin>>x[i];
    }
   int sum=0;
    
    for(int i=0;i<n;i++)
    {
              sum+=x[i];
    
    cout<<sum<<" ";
    }
   return 0;
}

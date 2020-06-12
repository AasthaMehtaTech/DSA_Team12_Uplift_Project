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
    int max,min,sum=0;
    max=x[0];
    for(int i=0;i<n;i++)
    {
       if(x[i]>max)
       max=x[i];
    }
    cout<<"Max="<<max<<endl;
    
    min=x[0];
    for(int i=0;i<n;i++)
    {
       if(x[i]<min)
       min=x[i];
    }
    cout<<"Min="<<min<<endl;
    
    for(int i=0;i<n;i++)
    {
              sum+=x[i];
    }
    cout<<"Sum="<<sum<<endl;
    
   return 0;
}

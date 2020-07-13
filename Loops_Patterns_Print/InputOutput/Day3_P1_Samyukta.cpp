#include <iostream>
using namespace std;

int main() {
    int n,i,max,min,sum=0;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    max=arr[0];
    min=arr[0];
    for(i=0;i<n;i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
        }
       if(arr[i]>max)
       {
           max=arr[i];
       }
        sum=sum+arr[i];
    }
    cout<<"Max="<<max<<endl<<"Min="<<min<<endl<<"Sum="<<sum;
    
    
	return 0;
}

#include <iostream>
using namespace std;
int main()
{
    int n,a[100],i,max,min,sum=0;
    cout<<"Enter the number of elements\n";
    cin>>n;
    cout<<"Enter the elements\n";
    for(i=0;i<n;i++)
        cin>>a[i];
        max = min = a[0];
    for(i=0;i<n;i++){
        if(a[i]>max)
            max = a[i];
        if(a[i]<min)
            min = a[i];
        sum += a[i];
    }
    cout<<"Max = "<<max<<endl<<"Min = "<<min<<endl<<"Sum = "<<sum;
    return 0;
}

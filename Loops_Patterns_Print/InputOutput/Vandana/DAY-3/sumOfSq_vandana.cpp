#include <iostream>
using namespace std;
int main()
{
    int a[100],n,sq=0,i;
    cout<<"Enter the number of elements\n";
    cin>>n;
    cout<<"Enter the elements\n";
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=0;i<n;i++)
       sq += a[i]*a[i];
     cout<<"Sum = "<<sq;
}

// program for prefix array

#include<iostream>
using namespace std;

int prefix(int arr[], int n)
{
    int prefixArr[n];
    prefixArr[0] = arr[0];

    for(int i=1; i<n ;i++)
    {
        prefixArr[i] =  prefixArr[i-1] + arr[i];
    }

    for(int i= 0;i<n;i++)
        cout<<prefixArr[i]<<" ";
    return 0;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    prefix(arr,n);
    return 0;
}

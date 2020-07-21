#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[100],i,k;
    cout<<"Enter the number of elements\n";
    cin>>n;
    cout<<"Enter the elements\n";
    for(i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    cout<<"Enter the kth element\n";
    cin>>k;
    cout<<a[k-1];
}


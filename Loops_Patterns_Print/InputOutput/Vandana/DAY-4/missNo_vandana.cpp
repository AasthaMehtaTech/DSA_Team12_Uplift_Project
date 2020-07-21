#include <bits/stdc++.h>
#include <iostream>
#include<cstdlib>
using namespace std;
int main()
{
    int n,a[100],i,x1=0,x2,u;
    cout<<"Enter the number of elements\n";
    cin>>n;
    cout<<"Enter the elements\n";
    for(i=0;i<n;i++)
        cin>>a[i];
   x2=a[0];
    for(i=1;i<=n;i++)
        x1 = x1^i;
    for(i=1;i<n;i++)
        x2 = x2^a[i];
        u = x1^x2;
    cout<<u;
}

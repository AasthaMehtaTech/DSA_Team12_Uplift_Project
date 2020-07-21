#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[100],i,t,j;
    cout<<"Enter the number of elements\n";
    cin>>n;
    cout<<"Enter the elements\n";
    for(i=0;i<n;i++)
        cin>>a[i];
    cout<<"Enter the target number\n";
    cin>>t;
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(a[i]+a[j]==t){
                cout<<a[i]<<" and "<<a[j]<<endl;
        }
    }
}
}

// Example program
#include <iostream>
#include <bits/stdc++.h> 
#include <string>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int csum=a[0];
    int s=a[0];
    
    for(int i=1;i<n;i++)
    {
        if(csum<0)
        {
            csum=a[i];
        }
        
        else if(csum>0)
        {
            csum+=a[i];
        }
        
    }
    if(csum>s)
    {
     s=csum;   
    }
    cout<<s;
    
 }
   

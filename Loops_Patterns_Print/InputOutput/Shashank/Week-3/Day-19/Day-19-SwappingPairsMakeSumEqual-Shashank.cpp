#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int swappair(int a[],int b[],int m,int n)
{
    int asum=0,bsum=0;
    for(int i=0;i<m;i++)
    {
        asum+=a[i];
    }
    for(int i=0;i<n;i++)
    {
        bsum+=b[i];
    }
    int l=min(m,n),sa=0,sb=0;
   for(int i=0;i<l;i++)
   {
       
       sa=asum-a[i]+b[i];
       sb=bsum-b[i]+a[i];
       if(sa==sb)
       {
           return 1;
       }
       
   }
   return -1; 
    
}
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,m;
	    cin>>m>>n;
	    int a[m],b[n];
	    for(int i=0;i<m;i++)
	    {
	        cin>>a[i];
	    }
	    for(int i=0;i<n;i++)
	    {
	        cin>>b[i];
	    }
	   cout<<swappair(a,b,m,n);
	    cout<<endl;
	}
}

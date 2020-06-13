#include<iostream>
using namespace std;
int main()
{
int n,x,s=-1;
cin>>n;
for(int i=n;i>=1;i--)
{
int k=1,j;

for(j=0;j<i;j++)
{
cout<<k<<" ";
k++;
}

for(j=0;j<s;j++)
{
cout<<"*"<<" ";
}
s+=2;

cout<<"\n";
}
}
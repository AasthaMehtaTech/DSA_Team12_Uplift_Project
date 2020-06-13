// Example program
#include <iostream>
#include <string>
using namespace std;

int main()
{
int n,a[n];
cin>>n;
for(int i=0;i<n-1;i++)
{
    cin>>a[i];
}
int sum1;
int sum=n*(n+1)/2;
for(int i=0;i<n-1;i++)
{
    sum1+=a[i];
}
cout<<sum-sum1;

}

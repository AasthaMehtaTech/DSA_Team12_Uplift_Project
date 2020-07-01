#include <iostream>
using namespace std;

int main() {
int n,sum,a,sum1;
cin>>n;
for(int i=1;i<n;i++)
{
    cin>>a;
    sum1+=a;
}
sum=n*(n+1)/2;
cout<<sum-sum1;

}
#include <iostream>
using namespace std;

int main() {
int n,i,j,v=1;
cin>>n;
for(i=0;i<n-1;i++)                 //to iterate rows
{
    for(j=0;j<=i;j++)              //to iterate columns
    {
       cout<<v<<" ";               //to print numbers in first half
       v++;
    }
    for(j=0;j<((2*n)-3-(2*i));j++)   // to print spaces
    {
        cout<<" "<<" ";
    }
    for(j=0;j<=i;j++)               // to print remaining numbers
    {
        v--;
        cout<<v<<" ";
    }
    cout<<endl;                     //for newline
}
for(i=1;i<=n;i++)                   //for last row increasing numbers
{
    cout<<i<<" ";
}
for(i=n-1;i>=1;i--)                 //for last row decreasing numbers
{
    cout<<i<<" ";
}
	return 0;
}

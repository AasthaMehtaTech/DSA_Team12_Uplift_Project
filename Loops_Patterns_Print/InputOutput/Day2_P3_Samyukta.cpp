#include <iostream>
using namespace std;

int main() {
	int n,i,j,v=1;
	cin>>n;
	for(i=1;i<=n;i++)                 //for first line
	{
	    cout<<i<<" ";                 // printing in first line
	}
	cout<<endl;
	for(i=0;i<n-1;i++)             // for rest rows
	{
	    v=1;
	    for(j=n-1-i;j>=1;j--)          // for printing numbers in a row
	    {
	       cout<<v<<" ";
	       v++;
	    }
	    for(j=0;j<(2*i)+1;j++)           // for printing * in row
	    {
	        cout<<"*"<<" ";
	    }
	    cout<<endl;                        //for new line
	}
	return 0;
}

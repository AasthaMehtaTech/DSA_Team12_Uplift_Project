#include <iostream>
using namespace std;
int main() {
	int n,i;
	cin>>n;
	int arr[n-1],totalsum,currentsum=0;
	totalsum=n*(n+1)/2;
	for(i=0;i<n-1;i++)
	{
	    cin>>arr[i];
	}
	for(i=0;i<n-1;i++)
	{
	    currentsum+=arr[i];
	}
	cout<<totalsum-currentsum;
	return 0;
}

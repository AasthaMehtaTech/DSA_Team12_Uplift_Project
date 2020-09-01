#include <iostream>
using namespace std;

int main() {
	int i,n,sum=0;
	cin>>n;
	int arr[n];
	int actual=n*(n+1)/2;               //max number is n as 0 is included as missing number
	for(i=0;i<n;i++)
	{
	    cin>>arr[i];
	    sum=sum+arr[i];
	}
	cout<<actual-sum;
	return 0;
}

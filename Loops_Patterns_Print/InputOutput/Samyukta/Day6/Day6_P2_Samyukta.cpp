#include <iostream>
using namespace std;

int main() {
	int n,i,k,j,count=0;
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++)
	{
	    cin>>arr[i];
	}
	cin>>k;
	for(i=0;i<n-1;i++)
	{
	    for(j=i+1;j<n;j++)
	    {
	        if((arr[i]-arr[j]==k)||(arr[j]-arr[i]==k))  //checking condition
	        {
	            count++;
	        }
	    }
	}
	cout<<count;
	return 0;
}

#include <iostream>
using namespace std;

int main() {
	int n,i,prefix=0;
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++)
	{
	    cin>>arr[i];
	}
	for(i=0;i<n;i++)
	{
	        prefix=prefix+arr[i];
	        cout<<prefix<<" ";
	}
	
	return 0;
}

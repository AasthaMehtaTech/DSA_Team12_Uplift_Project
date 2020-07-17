#include <iostream>
using namespace std;

int main() {
	int n,i,target,j;
	cin>>n;
	int arr[i];
	for(i=0;i<n;i++)
	{
	    cin>>arr[i];
	}
	cin>>target;
	for(i=0;i<n;i++)
	{
	    for(j=0;j<n;j++)
	    {
	        if(arr[i]+arr[j]==target)
	        {
	            cout<<arr[i]<<" "<<"and"<<" "<<arr[j]<<endl;
	        }
	    }
	}
	return 0;
}

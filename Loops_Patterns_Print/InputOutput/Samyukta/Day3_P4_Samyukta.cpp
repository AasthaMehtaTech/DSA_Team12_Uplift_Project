#include <iostream>
#include<cstdlib>              //library for abs
using namespace std;

int main() {
	int n,max=0,i,current=0;
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++)
	{
	    cin>>arr[i];
	}
	for(i=0;i<n-1;i++)
	{
	    current=abs(arr[i]-arr[i+1]);          
	    if(current>max)                          //max is variable containing max value of diff
	    {
	        max=current;
	    }
	}
	cout<<max;
	return 0;
}

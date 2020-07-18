/*
#include <iostream>
using namespace std;

int main() {
	int n,i,prefix=0;                        //this takes less memory but we can't use it further because we dont store it in array, we just directly printing
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
*/
#include <iostream>
using namespace std;
int main() {
	int n,i;
	cin>>n;
	int arr[n],prefix[n];                  //storing in prefix array then printing
	for(i=0;i<n;i++)
	{
	    cin>>arr[i];
	}
	prefix[0]=arr[0];                     //we consider case 0 because if we do i-1 in formula
	for(i=1;i<n;i++)                      //then we get garbage value
	{
	    prefix[i]=prefix[i-1]+arr[i];
	}
	for(i=0;i<n;i++)
	{
	    cout<<prefix[i]<<" ";
	}
	return 0;
}

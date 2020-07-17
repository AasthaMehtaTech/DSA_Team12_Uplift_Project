#include <iostream>
#include<algorithm>                   //for sort function
using namespace std;
int ksmallest(int arr[],int k,int n)
{
    sort(arr,arr+n);
    return arr[k-1];
}

int main() {
	int n,i,k;
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++)
	{
	   cin>>arr[i];
	}
	cin>>k;
	cout<<ksmallest(arr,k,n);
	return 0;
}

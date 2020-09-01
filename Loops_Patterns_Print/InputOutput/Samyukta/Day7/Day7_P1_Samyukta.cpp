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



//2 approch not including 0



#include <iostream>
using namespace std;

int main() {
	int i,n,sum=0;
	cin>>n;
	int arr[n];
	int actual=(n+1)*(n+2)/2;               //max number is n+1 as 0 is not included and array is of n
	for(i=0;i<n;i++)
	{
	    cin>>arr[i];
	    sum=sum+arr[i];
	}
	cout<<actual-sum;
	return 0;
}

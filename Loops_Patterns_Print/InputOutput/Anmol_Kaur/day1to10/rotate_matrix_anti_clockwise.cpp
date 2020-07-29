#include <iostream>
using namespace std;

int main() {
	int m,n,i,j;
	cin>>n>>m;
	int arr[n][m];
	for(i=0;i<n;i++)
	{
	    for(j=0;j<m;j++)
	    {
	        cin>>arr[i][j];
	    }
	}
	for(j=m-1;j>=0;j--)
	{
	    for(i=0;i<n;i++)
	    {
	        cout<<arr[i][j]<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}

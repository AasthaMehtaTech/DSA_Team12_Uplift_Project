#include <iostream>
using namespace std;
int main() {
	int m,n,k=0,l=0,i,j;
	cin>>m>>n;
	int arr[m][n];
	for(i=0;i<n;i++)
	{
	    for(j=0;j<m;j++)
	    {
	        cin>>arr[i][j];
	    }
	}
	while(k<n&&l<m)
	{
	    for(i=l;i<m;i++)                //first row
	    {
	        cout<<arr[k][i]<<" ";
	    }
	    k++;
	    for(i=k;i<n;i++)                //last column
	    {
	        cout<<arr[i][n-1]<<" ";
	    }
	    m--;
	    if(k<n){
	    for(i=m-1;i>=l;i--)            //last row
	    {
	        cout<<arr[n-1][i]<<" ";
	    }
	    n--;}
	    if(l<m)
	    {
	    for(i=n-1;i>=k;i--)            //first column
	    {
	        cout<<arr[i][l]<<" ";
	    }
	    l++;
	    }
	}
	return 0;
}

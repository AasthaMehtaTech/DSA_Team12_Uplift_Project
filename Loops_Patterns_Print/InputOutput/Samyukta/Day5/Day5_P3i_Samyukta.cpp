#include <iostream>
using namespace std;
int main() {
	int m,n,k=0,l=0,i,j,score=1;
	cin>>n;
	m=n;
	int arr[m][n];
	
	while(k<n&&l<m)
	{
	    for(i=l;i<m;i++)                //first row
	    {
	        arr[k][i]=score;            //assigning values in certain pattern
	        score++;
	        cout<<arr[k][i]<<" ";
	    }
	    k++;
	    for(i=k;i<n;i++)                //last column
	    {
	        arr[i][n-1]=score;
	        score++;
	        cout<<arr[i][n-1]<<" ";
	    }
	    m--;
	    if(k<n){
	    for(i=m-1;i>=l;i--)            //last row
	    {
	        arr[n-1][i]=score;
	        score++;
	        cout<<arr[n-1][i]<<" ";
	    }
	    n--;}
	    if(l<m)
	    {
	    for(i=n-1;i>=k;i--)            //first column
	    {
	        arr[i][l]=score;
	        score++;
	        cout<<arr[i][l]<<" ";
	    }
	    l++;
	    }
	}
	return 0;
}

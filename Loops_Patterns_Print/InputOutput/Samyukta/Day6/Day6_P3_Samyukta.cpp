#include <iostream>
using namespace std;
int binarysearch(int arr[],int s,int r, int key)
{
    if(s<=r)
    {
        int mid=(s+r)/2;
        if(arr[mid]==key)
        return mid;
        if(arr[mid]>key)
        return binarysearch(arr,0,mid-1,key);
        if(arr[mid]<key)
        return binarysearch(arr,mid+1,r,key);
    }
    return -1;
}

int main() {
	int n,i,key,result;
	cin>>n;
	int arr[n],r=n-1;
	for(i=0;i<n;i++)
	{
	    cin>>arr[i];
	}
	cin>>key;
	result=binarysearch(arr,0,r,key);
	(result==-1)?(cout<<"Element not found"):(cout<<key<<"found at"<<result);
	
	
	return 0;
}

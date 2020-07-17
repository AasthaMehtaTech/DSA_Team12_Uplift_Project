#include <iostream>                                //Dutch National Flag Problem
using namespace std;
void swap(int arr[],int a,int b)                   //swaping elements
{
    int temp;
   temp=arr[a];
   arr[a]=arr[b];
   arr[b]=temp;
}

int threeWayPartition(int arr[],int high)             //parting array into 4 divisions 
{                                                     //from starting to low contains 0
    int beg=0,mid=0;                                  //from low to mid contains 1
    while(mid<high)                                   //from mid to high contains elemnts which are remaining to scan
    {                                                 //from high to last index contains 2
        if(arr[mid]==0)                               // if 0 then swap mid with beg and increment mid and beg both
        {
            swap(arr,mid,beg);
            beg++;
            mid++;
        }
        if(arr[mid]==1)                               //if 1 then increment mid only
        {
            mid++;
        }
        if(arr[mid]==2)                               //if 2 then swap high with mid and increment mid and decrement high
        {
            swap(arr,mid,high);
            high--;
            mid++;
        }
    }
}

int main() {
	int n,i,high;
	cin>>n;
	high=n-1;
	int arr[n];
	for(i=0;i<n;i++)
	{
	    cin>>arr[i];
	}
	threeWayPartition(arr,high);
	for(i=0;i<n;i++)
	{
	    cout<<arr[i]<<" ";
	}
	return 0;
}

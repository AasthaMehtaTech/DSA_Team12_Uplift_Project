#include <iostream>
using namespace std;
                                         //kadane's Algorithm
int main() {
    int n,i,maxsum_so_far=0,sum_here=0;  //maxsum_so_far contains max sum of subarray till now
    cin>>n;                              //sum_here contains max upto current position
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    //maxsum_so_far=arr[0];
    for(i=0;i<n;i++)
    {
        sum_here+=arr[i];               //updating sum_here by adding new current position
        if(sum_here>maxsum_so_far)      //for updating max so far
        {
            maxsum_so_far=sum_here;
        }
        if(sum_here<0)                 //to eliminate if - no. scores more than prev + no.
        {                              //so initialize with zero so that max so far don't go -ve.
            sum_here=0;
        }
    }
    cout<<maxsum_so_far;
	return 0;
}

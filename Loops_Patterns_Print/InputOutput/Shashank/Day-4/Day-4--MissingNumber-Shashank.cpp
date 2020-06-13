#include<iostream>
using namespace std;

int main()
{
    int N;
    cout << "Enter elements to be inserted : ";
    cin >> N;

    long OriginalSum=N*(N+1)/2;
    int arr[N-1];
    for(int i=0;i<N-1;i++){
    	cout << "Enter " << i << "th element in array : ";
		  cin >> arr[i];
	  }
    long sum=0;
    for(int i=0;i<N-1;i++){
		  sum+=arr[i];
	  }
    cout << "Missing Number is : " << OriginalSum-sum;
}

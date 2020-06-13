#include<iostream>
using namespace std;

int convert(int arr[], int n)
{	 
    int dec_value [50]={0};
    for(int i=0; i<n ;i++)
    {
    int base = 1; 
    while (arr[i]>0) { 
        int last_digit = arr[i] % 10; 
        arr[i] = arr[i] / 10; 
        dec_value[i] += last_digit * base; 
        base = base * 2; 
      } 
    }  
  for(int i=0; i<n ;i++)
	{
		
		cout<<dec_value[i]<<endl;
	}
}

int main()
{
	int n;
	cin>>n;
	int arr[50];

	for(int i=0; i<n ;i++)
	{
		cin>>arr[i];
	}

	convert(arr,  n);

	return 0;
}

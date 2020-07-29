#include<iostream>
using namespace std;
void calculateALL(int arr[],int n)
{
    int i,temp =0,maX = arr[0],miN = arr[0],sum_squares = 0,abs_diff = 0,sum = 0;
    for(i=0;i<n;i++)
    {
        sum += arr[i];

        if(maX < arr[i])
            maX = arr[i];
        if(miN > arr[i])
            miN = arr[i];

       if( i!=0 && i!=n )
        {
        temp = abs(arr[i]- arr[i-1]);
        if(temp >= abs_diff)
                abs_diff = temp;
        }

       sum_squares += arr[i]*arr[i];
    }
       cout<<"max = "<<maX<<endl<<"min = "<<miN<<endl<<"sum = "<<sum<<endl<<"sum of squares of each element = "<<sum_squares<<endl<<"Maximum difference = "<<abs_diff<<endl;
}

int main()
{
    int n;
    cout<<"Enter size of array\n";
    cin>>n;
    int arr[n];
    cout<<"Enter elements of array\n";
    for(int i=0; i<n; i++)
        cin>>arr[i];
    calculateALL(arr, n);
    return 0;
}

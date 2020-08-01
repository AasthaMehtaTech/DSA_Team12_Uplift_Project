/*
 Eg:
 Input:
 10
 1 2 3 4 5 6 7 8 10
 Output:
 9
*/

#include<iostream>
using namespace std;

int main()
{
    int arr[] ={1, 2 ,3 ,4, 5, 6 ,7 ,8 ,10};
   int n = sizeof(arr)/sizeof(arr[0]);
    //int n = arr.size();
    for(int i=0; i< n-1; i++)
        {
            if( arr[i+1] - arr[i] != 1)
                cout<<arr[i] +1;
        }

    return 0;
}

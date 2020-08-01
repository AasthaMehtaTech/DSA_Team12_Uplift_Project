/*
     Given an array arr[] and a number K where K is smaller than size of array, the task is to find the Kth smallest element in the given array. It is given that all array elements are distinct.
 Eg:
 Input:
 6
 7 10 4 3 20 15
 3
 Output:
 7
 Explanation:3rd smallest element in the given array is 7.

*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int size, elem;
    cin>>size;
    int ar[size];
    for(int i=0; i< size; i++)
        cin>>ar[i];
    cin>>elem;

    sort(ar,ar+size);
    cout<<ar[elem-1];
    return 0;

}

/*
  Given an array A of size N containing 0s, 1s, and 2s; you need to sort the array in ascending order.
  Eg:
Input:
5
0 2 1 2 0
Output:
0 0 1 2 2

*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ar[n];
    for(int i =0; i<n; i++)
       cin>>ar[i];
    sort(ar, ar+n);
     for(int i =0; i<n; i++)
       cout<<ar[i]<<" ";

     /* alternative approach

     Keep three counter c0 to count 0s, c1 to count 1s and c2 to count 2s
Traverse through the array and increase the count of c0 is the element is 0,increase the count of c1 is the element is 1 and increase the count of c2 is the element is 2
Now again traverse the array and replace first c0 elements with 0, next c1 elements with 1 and next c2 elements with 2.

    int i, cnt0 = 0, cnt1 = 0, cnt2 = 0;

    // Count the number of 0s, 1s and 2s in the array
    for (i = 0; i < n; i++) {
        switch (arr[i]) {
        case 0:
            cnt0++;
            break;
        case 1:
            cnt1++;
            break;
        case 2:
            cnt2++;
            break;
        }
    }

    // Update the array
    i = 0;

    // Store all the 0s in the beginning
    while (cnt0 > 0) {
        arr[i++] = 0;
        cnt0--;
    }

    // Then all the 1s
    while (cnt1 > 0) {
        arr[i++] = 1;
        cnt1--;
    }

    // Finally all the 2s
    while (cnt2 > 0) {
        arr[i++] = 2;
        cnt2--;
    }

    // now Print the sorted array
    */
    return 0;
}

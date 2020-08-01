//Given an array arr of N integers. Find the contiguous sub-array with maximum sum.
/* Eg:
 Input:
 5
 1 2 3 -2 5
 Output:
 9
*/

#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int ar[n];
    for(int i=0; i<n; i++)
            cin>>ar[i];

    int sum = 0, best = ar[0];
    for(int i=0 ;i<n; i++)
    {
        sum = max(ar[i], sum + ar[i]);
        best = max(sum, best);
    }

    cout<<best;
    return 0;
}

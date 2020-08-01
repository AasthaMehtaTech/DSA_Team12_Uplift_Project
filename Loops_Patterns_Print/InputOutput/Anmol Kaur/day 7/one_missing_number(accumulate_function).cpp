// One Missing Number in O(1) space & O(n) time.

/*
Input: [3,0,1]
Output: 2
*/

#include<iostream>
#include<numeric>
using namespace std;

int func(int a[], int s)
{
    int sum;
    sum = accumulate(a, a+s, 0);
    return ( (s*(s+1)/2) - sum );
 }

 int main()
 {
     int s;
     cin>>s;
     int a[s];
     for(int i =0; i<s ;i++)
        cin>> a[i];
     cout<<func(a , s);
     return 0;
 }

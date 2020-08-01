/*

Given an integer array and a non-negative integer k,count all distinct pairs with difference equal to k, i.e., A[ i ] - A[ j] = k.
Ex:
Input:
5
1 5 4 1 2
0
Output:
1
Explanation: There is only one pair with difference 0 i.e (1,1)
*/

#include <cstdlib>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,c=0;
    cin>>n;
    int a[n];
    for(int i =0; i<n ;i++)
        cin>>a[i];

        int k ;
        cin>>k;

   for(int i=0; i<n; i++)
   {

       for(int j =i+1 ;j<n; j++)
       {
           if( abs(a[i]- a[j])==k)
           {
               //cout<<abs(a[i]- a[j])<<" * ";
               c++;
           }
       }
   }
        cout<<c;
    return 0;
}

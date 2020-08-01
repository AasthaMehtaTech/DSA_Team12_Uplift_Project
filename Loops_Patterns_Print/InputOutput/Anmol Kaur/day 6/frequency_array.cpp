/* Eg:
Input:
5
5 5 4 6 4
Output:
 4 4 5 5 6
 Explanation: The highest frequency here is 2. Both 5 and 4 have that frequency. Now since the frequencies are same then smaller element comes first. So 4 4 comes first then comes 5 5. Finally comes 6.
The output is 4 4 5 5 6.

*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i =0; i<n ;i++)
        cin>>a[i];

    sort(a,a+n);
    for(int i =0; i<n ;i++)
        cout<<a[i]<<" ";

    return 0;
}

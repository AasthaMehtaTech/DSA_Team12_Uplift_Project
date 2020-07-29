/*
Take as input N, the size of array. Take N more inputs and store that in an array. Take as input “target”, a number. Write a Program which prints all pairs of numbers which sum to target.
Eg:
Input:
5
1 3 4 2 5
5
Output:
1 and 4
2 and 3
Explanation: Find any pair of elements in the array which has sum equal to target element and print them.
*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, el, flag;
    cin>>n;
    int ar[n];
    for(int i=0; i<n; i++)
            cin>>ar[i];
    cin>>el;

    for(int i=0 ;i<n; i++)
    {
        for(int j=i; j<n; j++)
        {
            if(ar[i] + ar[j] == el)
                {   flag =1;
                    cout<<ar[i]<<" and " <<ar[j]<<endl;
                }
        }
    }
 if(flag!=1)
        cout<<"-1";

    return 0;
}


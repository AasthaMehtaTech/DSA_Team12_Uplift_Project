
// Given a matrix mat[] of size n x m, where every row and column is sorted in increasing order, and a number x is given.
// The task is to find whether element x is present in the matrix or not. Expected Time Complexity: O(m+n)


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int a[n][m];
    for(int i=0; i<n;i++)
        for(int j=0; j<n ;j++)
        cin>>a[i][j];

    int k;
    cin>>k;

    int top = a[0][0];
    int bottom = a[n-1][m-1];
    if( k < top || k > bottom)
    {
        cout<<"0";
        return 0;
    }

    // set indexes for top right element
    int i =0;
    int j= m-1;

    while( i<n && j>=0)
    {
        if(a[i][j] == k)
        {
            cout << "n Found at "
				<< i << ", " << j;
			return 1;
        }

        else if( k > a[i][j])

            i++;
        else j--;
    }

    return 0;
}

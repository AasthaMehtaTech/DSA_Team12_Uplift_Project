
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    cout<<"it's a square matrix\nNow please enter the elements\n";
    int a[n][n];
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
        cin>>a[i][j];
    //zig_zag(n,ar);
    int sum=0;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(i==0||i==n-1){
                sum+=a[i][j];
            }
            else if(i+j==n-1){
                sum+=a[i][j];
            }
        }
        }

    cout<<sum;
    return 0;
}

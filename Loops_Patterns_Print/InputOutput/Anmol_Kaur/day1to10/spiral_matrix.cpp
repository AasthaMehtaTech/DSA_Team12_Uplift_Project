
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n][n];
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
              cin>>a[i][j];

     int dir = 0;
     int l,r,t,b;

     l=0;
     r = n-1;
     b = n-1;
     t= 0 ;

     while(l<=r && t<=b)
     {


     if(dir == 0)
     {
         for(int i = l ; i<=r; i++)
            cout<<a[t][i]<<" ";
         t++;
     }

    else if(dir == 1)
     {
         for( int i = t; i<=b; i++)
            cout<<a[i][r]<<" ";
         r--;
     }

     else if(dir==2)
     {
       for(int i =r; i>=l ; i--)
            cout<<a[b][i]<<" ";
       b--;
     }

     else if(dir==3)
     {
        for(int i= b ;i>=t; i--)
            cout<<a[i][l]<<" ";
        l++;
     }

     dir = (dir+1)%4;

     }
    return 0;
}

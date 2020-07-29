//Given a matrix, A of size M x N of 0s and 1s. If an element is 0, set its entire row and column to 0

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>m>>n;
    bool a[m][n];
    for(int i=0; i<m; i++)
        for(int j=0; j<n; j++)
              cin>>a[i][j];

 for(int i=0; i<m; i++)
       {
           for(int j=0; j<n; j++)
        {
            if(a[i][j] == 0)
                {
                    for(int k=0;k<n;k++)
                    a[i][k]=0;
                }

       }
       }

       for(int j=0; j<n; j++)
       {
           for(int i=0; i<m; i++)
        {
            if(a[i][j] == 0)
                {
                    for(int k=0;k<n;k++)
                    a[i][k]=0;

                    for(int k=0;k<m;k++)
                    a[k][j]=0;
                }

       }
       }

    for(int i=0; i<n; i++)
        {for(int j=0; j<n; j++)
              cout<<a[i][j]<<" ";
              cout<<endl;}
return 0;
}

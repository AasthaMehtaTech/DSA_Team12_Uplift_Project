#include <iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    int n,a[100][100],i,j,m,s=0;
    cout<<"Enter the rows & columns of the matrix\n";
    cin>>n>>m;

    cout<<"Enter the elements\n";
    for(i=0;i<n;i++)
        for(j=0;j<m;j++)
            cin>>a[i][j];
    for(j=m-1;j>=0;j--){
        for(i=0;i<n;i++){
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }
}

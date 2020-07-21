#include <iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    int n,a[100][100],i,j,m,s=0;
    cout<<"Enter the rows & columns of the matrix\n";
    cin>>n>>m;
    if(n!=m){
        cout<<"Invalid\n";
        exit(0);
    }
    cout<<"Enter the elements\n";
    for(i=0;i<n;i++)
        for(j=0;j<m;j++)
            cin>>a[i][j];
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(i == 0 || i==n-1){
                cout<<a[i][j]<<" + ";
                s += a[i][j];
            }
            else if(i+j == n-1){
                s += a[i][j];
                cout<<a[i][j]<<" + ";
        }
    }}
    cout<<"The zigzag sum is "<<s;
}




#include <iostream>
#include<cstdlib>
using namespace std;
int main()
{
    int n,a[100],i,j,x=0,y=0,z=0;
    cout<<"Enter the number of elements\n";
    cin>>n;
    cout<<"Enter the elements\n";
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=0;i<n;i++){
        if(a[i] == 0)
            x++;
        if(a[i] == 1)
            y++;
        else if(a[i] == 2)
            z++;
    }
    for(j=0;j<x;j++)
        cout<<"0 ";
    for(j=0;j<y;j++)
        cout<<"1 ";
    for(j=0;j<z;j++)
        cout<<"2 ";
}

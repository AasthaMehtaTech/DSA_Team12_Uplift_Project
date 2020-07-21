#include <iostream>
#include<cstdlib>
using namespace std;
int main()
{
    int n,a[100],i,maxi=0,ab;
    cout<<"Enter the number of elements\n";
    cin>>n;
    cout<<"Enter the elements\n";
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=0;i<=n-2;i++){
        ab = abs(a[i]-a[i+1]);
        if(ab>maxi)
            maxi = ab;

}cout<<maxi;
}

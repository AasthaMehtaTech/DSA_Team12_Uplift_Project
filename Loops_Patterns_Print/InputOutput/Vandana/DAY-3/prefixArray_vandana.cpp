#include <iostream>
using namespace std;
int main()
{
    int n,a[100],i,r=0;
    cout<<"Enter the number of elements\n";
    cin>>n;
    cout<<"Enter the elements\n";
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=0;i<n;i++){
      r+=a[i];
   cout<<r<<" ";
    }

}

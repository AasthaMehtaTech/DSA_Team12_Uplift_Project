#include <iostream>
#include<cstdlib>
using namespace std;
int main()
{
    int n,a[100],i,csum=0,ans = -1;
    cout<<"Enter the number of elements\n";
    cin>>n;
    cout<<"Enter the elements\n";
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=0;i<n;i++){
        csum = max(0, csum);
        csum+=a[i];
        ans = max(ans,csum);
    }
    cout<<ans<<endl;
}

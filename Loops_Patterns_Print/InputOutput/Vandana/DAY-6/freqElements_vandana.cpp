#include <iostream>
#include<algorithm>
using namespace std;
bool compare(int a, int b){
return a<b;
}
int main() {
    int i,n,a[100];
    cout<<"Enter the no of elements\n";
    cin>>n;
    cout<<"Enter the array elements\n";
    for(i=0;i<n;i++)
        cin>>a[i];
    sort(a, a+n, compare);
    for(i=0;i<n;i++)
        cout<<a[i]<<" ";
}

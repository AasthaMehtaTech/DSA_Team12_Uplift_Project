#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int a[100000];
    for(int i=0;i<t;i++){
        cin>>a[i];
    }
    int k;
    cin>>k;
    sort(a,a+t);
    cout<<a[k-1];


}

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int a[100];
    for(int i=0;i<t;i++){
        cin>>a[i];
    }
    int val;
    cin>>val;
    sort(a,a+t);
   cout<<a[val-1];

}
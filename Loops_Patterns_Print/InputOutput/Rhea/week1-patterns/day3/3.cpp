#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[100000];
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(i!=0){
            a[i]=a[i-1]+a[i];
        }
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }


}

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
    for(int i=0;i<t-1;i++){
        for(int j=i+1;j<t;j++){
            if(a[i]+a[j]==k){
                cout<<a[i]<<" and "<<a[j]<<endl;
            }
        }
    }


}


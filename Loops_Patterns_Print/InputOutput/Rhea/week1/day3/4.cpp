#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int a[100000];
    int max=0;
    for(int i=0;i<t;i++){
        cin>>a[i];
        if(i!=0){
            int d=a[i]-a[i-1];
            if(d<0){
                d=-1*d;
            }
            if(d>max){
                max=d;
            }
        }
    }
    cout<<max;

}

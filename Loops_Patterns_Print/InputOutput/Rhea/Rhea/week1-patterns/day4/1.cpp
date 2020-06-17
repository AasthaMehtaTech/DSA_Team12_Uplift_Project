#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int sum=0;
    for(int i=0;i<t-1;i++){
        int ele;
        cin>>ele;
        sum+=ele;
    }
    int total=t*(t+1)/2;
    cout<<total-sum;



}


#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
        for(int j=1;j<=2*t-2;j++){
            if(j<=t-i+1){
                cout<<j;
            }
            else if(j>=t+i-1){
                cout<<" ";
            }
            else{
                cout<<"*";
            }
        }
        cout<<endl;
    }


}


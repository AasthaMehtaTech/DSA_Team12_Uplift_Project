#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
        for(int j=1;j<=2*t;j++){
            if(j<=i||j>=2*t-i+1){
               if(j<=t)
                cout<<j;
               else
                cout<<2*t-j+1;
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }


}


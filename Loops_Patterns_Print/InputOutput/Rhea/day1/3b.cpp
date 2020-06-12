#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
        for(int j=1;j<=2*t-1;j++){
            if(j<=t-i){
                cout<<" ";
            }
            else if(j>=t+i){
                cout<<" ";
            }
            else {
                    if(t%2==0){
                        if(j%2!=0&&i%2==0){
                    cout<<"*";
                }
                else if(j%2==0&&i%2!=0){
                    cout<<"*";
                }
                else
                    cout<<" ";
                    }
                else{
                    if(j%2==0&&i%2==0){
                    cout<<"*";
                }
                else if(j%2!=0&&i%2!=0){
                    cout<<"*";
                }
                else
                    cout<<" ";
                    }
                }

            }

        cout<<endl;
    }
}

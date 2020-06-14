#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>m>>n;
    int a[100][100];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    for(int j=0;j<n;j++){
        for(int i=m-1;i>=0;i--){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }



}

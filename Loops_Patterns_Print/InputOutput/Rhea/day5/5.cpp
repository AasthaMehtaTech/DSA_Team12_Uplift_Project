#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>m>>n;
    int a[100][100];
    int b[100][100];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
            b[i][j]=a[i][j];
        }
    }
    cout<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(a[i][j]==0){
                for(int k=0;k<n;k++){
                    b[i][k]=0;
                }
                for(int k=0;k<m;k++){
                    b[k][j]=0;
                }
            }
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }


}



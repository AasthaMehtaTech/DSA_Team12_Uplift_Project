/* https://www.interviewbit.com/problems/set-matrix-zeros/ */

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    
    cout << "Enter order of matrix ";
    cin>>m>>n;
    int a[m][n];
    int b[m][n];
    
    cout << "Enter elements in array : ";
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
    cout << "Result : "<< endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }


}

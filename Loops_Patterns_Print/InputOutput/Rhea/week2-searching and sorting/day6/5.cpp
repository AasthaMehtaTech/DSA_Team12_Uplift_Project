#include<bits/stdc++.h>
using namespace std;
void check(int a[][100],int m,int n,int x){
    int r=m-1;
    int c=0;
    int flag=0;
    while(r>=0&&c<n){
        if(x==a[r][c]){
            cout<<"true";
            flag=1;
            break;
        }
        else if(x>a[r][c]){
            c++;
        }
        else{
            r--;
        }
    }
    if(!flag)
    cout<<"false";
}
int main(){
   int m,n;
   cin>>m>>n;
   int a[100][100];
   for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        cin>>a[i][j];
    }
   }
   int x;
   cin>>x;
   check(a,m,n,x);


}


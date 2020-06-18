#include<iostream>
using namespace std;
int main(){
    int i,j,k,n;
    cin>>n;
    for(i=1;i<=n;i++){
        for(k=1;k<=n-i;k++)
            cout<<" ";
        for(j=1;j<=i;j++)
            cout<<" *";
            cout<<"\n";
  }
  for(i=n-1;i>=1;i--){
    for(k=1;k<=n-i;k++)
        cout<<" ";
    for(j=1;j<=i;j++)
        cout<<" *";
        cout<<"\n";
  }

   }

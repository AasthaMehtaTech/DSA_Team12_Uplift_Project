#include<iostream>
using namespace std;
int main(){
int i,n,j;
cin>>n;
for(i=1;i<=n;i++){
    for(j=1;j<=i;j++)
        cout<<"*";
        cout<<"\n";
}
}

#include<iostream>
using namespace std;
int main(){
int i,j,n;
cin>>n;
for(i=n;i>=1;i--){
    for(j=1;j<=i;j++)
        cout<<j<<" ";
    for(j=1;j<=2*(n-i)-1;j++)
        cout<<"* ";
    cout<<endl;
}
return 0;
}

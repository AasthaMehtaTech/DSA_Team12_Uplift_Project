#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
for(int i=0;i<n;i++){
    for(int c=1;c<=n-i;c++){
        cout<<" ";
    }
    for(int c=0;c<=i;c++){
        cout<<"*"<<" ";
    }
    cout<<endl;
}
return 0;
}

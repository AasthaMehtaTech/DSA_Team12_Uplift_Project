#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
for(int i=1;i<=n;i++){
for(int c=1;c<=i;c++){
    cout<<"*"<<" ";
}
cout<<endl;
}
return 0;
}

#include<iostream>
using namespace std;
int main(){
    int n,i,j,a=0,b=1,c;
    cin>>n;
    for(i=0;i<n;i++){
        for(j=0;j<=i;j++){
            cout<<a<<" ";
            c = a+b;
            a=b;
            b=c;
        }

            cout<<"\n";
    }
}

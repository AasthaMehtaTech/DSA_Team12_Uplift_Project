#include<bits/stdc++.h>
using namespace std;
bool fun(int n){
    int c=0;
    int num=n;
    int sum=0;
    while(n!=0){
        n=n/10;
        c++;
    }
    n=num;
    while(n!=0){
        int rd=n%10;
        n=n/10;
        sum+=pow(rd,c);
    }

    if(sum==num){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    int t;
    cin>>t;
    bool ans=fun(t);
    if(ans) cout<<"true";
    else cout<<"false";



}

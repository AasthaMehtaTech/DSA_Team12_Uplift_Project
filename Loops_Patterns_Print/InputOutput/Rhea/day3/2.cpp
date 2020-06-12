#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int sum=0;
    while(t--)
    {
        int n;
        cin>>n;
        sum=sum+pow(n,2);
    }
    cout<<sum;
}


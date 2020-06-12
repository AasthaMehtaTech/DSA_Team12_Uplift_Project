#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int i=0;
        int sum=0;
        while(n>0){
            sum+=pow(2,i)*(n%10);
            n=n/10;
            i++;
        }
        cout<<sum<<endl;

    }


}


#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int min=INT_MAX;
    int max=INT_MIN;
    int sum=0;
    while(t--)
    {
        int n;
        cin>>n;
        if(n>max){
            max=n;
        }
        if(n<min){
            min=n;
        }
        sum+=n;

    }
 cout<<"max="<<max<<"min="<<min<<"sum="<<sum;

}


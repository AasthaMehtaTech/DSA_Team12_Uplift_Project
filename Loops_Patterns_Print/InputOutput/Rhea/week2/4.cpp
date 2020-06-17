#include<bits/stdc++.h>
using namespace std;
 int mySqrt(int x) {
        return pow(x,0.5);
    }
int main(){
    int n;
    cin>>n;
    int ans=mySqrt(n);
    cout<<ans;
}

#include<bits/stdc++.h>
using namespace std;
int main(){
    set<int> a;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int e;
        cin>>e;
        a.insert(e);
    }
    int k;
    cin>>k;
    int c=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;i<n;i++){
            if(a[j]-a[i]==k){
            c++;
        }
        }
    }
    cout<<c;

}

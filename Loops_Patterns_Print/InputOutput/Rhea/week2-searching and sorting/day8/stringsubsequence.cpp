#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        string s1;
        string s2;
        cin>>s1;
        cin>>s2;
        int a=s1.length();
        int b=s2.length();
        int i=0;
        int j=0;
        int flag=0;
        while(a!=i||b!=j){
            if(s1[i]==s2[j]){
                i++;
                j++;
            }
            else{
                j++;
            }
            if(i==a){
                flag=1;
                break;
            }
            if(b==j){
                flag=0;
                break;
            }
        }
        if(flag==1){
            cout<<1;
        }
        else{
            cout<<0;
        }
        cout<<endl;
    }


}


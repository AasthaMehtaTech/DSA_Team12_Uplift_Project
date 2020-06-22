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
        for(int i=0;i<s2.length();i++){
            for(int j=0;j<s1.length();j++){
                if(s2[i]==s1[j]){
                    s1[j]='0';
                }
            }
        }
        for(int i=0;i<s1.length();i++){
            if(s1[i]!='0'){
                cout<<s1[i];
            }
        }
        cout<<endl;
    }


}

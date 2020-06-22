#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        string s1;
        cin>>s1;

        for(int i=0;i<s1.length()-1;i++){
            for(int j=i+1;j<s1.length();j++){
                if(s1[i]==s1[j]){
                    s1[j]='!';
                }
            }
        }
        for(int i=0;i<s1.length();i++){
            if(s1[i]!='!'){
                cout<<s1[i];
            }
        }
        cout<<endl;
    }


}


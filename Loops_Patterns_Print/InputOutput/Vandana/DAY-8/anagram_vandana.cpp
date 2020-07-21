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
        int sump=0;
        int sumq=0;
        if(a==b){
                for(int i=0;i<a;i++){
                        sump+=s1[i];
                        sumq+=s2[i];
                }
                if(sump==sumq){
                    cout<<"YES"<<endl;
                }
                else{
                    cout<<"NO"<<endl;
                }

        }
        else{
            cout<<"NO"<<endl;
        }

    }

}




#include<bits/stdc++.h>
using namespace std;
void ans(string s1,string s2){
    int a=s1.length();
    int b=s2.length();

   int i1=0;
   int i2=0;
   int j=0;
    while(a!=0&&b!=0){

        if(j%2==0){
            cout<<s1[i1++];
            a--;
        }
        else{
            cout<<s2[i2++];
            b--;
        }
        j++;
    }
    if(a==0){
                while(b!=0){
                    cout<<s2[i2++];
                    b--;
                }

        }
        if(b==0){
            while(a!=0){
                cout<<s1[i1++];
                a--;
            }

        }

}
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        string s1;
        string s2;
        cin>>s1;
        cin>>s2;
        ans(s1,s2);
        cout<<endl;
    }


}


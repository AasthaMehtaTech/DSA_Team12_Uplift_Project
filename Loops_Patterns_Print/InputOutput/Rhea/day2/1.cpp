#include<bits/stdc++.h>
using namespace std;
int main(){
   int n;
   cin>>n;
   int a=1;
   int b=1;

   for(int i=1;i<=n;i++){
        if(i==1){
                cout<<0;
            }
            else if(i==2){
                cout<<1<<" "<<1;
            }
   else {
    for(int j=1;j<=i;j++){

                int sum=a+b;
                cout<<sum<<" ";
                a=b;
                b=sum;

   }


    }
    cout<<endl;
   }


}


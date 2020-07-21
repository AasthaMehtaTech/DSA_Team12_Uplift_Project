#include<iostream>
using namespace std;
int main(){
int a,s=0,t,am;
cout<<"Enter a number\n";
cin>>a;
t = a;
while(a!=0){
    am = a%10;
    s = s+am*am*am;
    a /= 10;
}
if(s==t)
    cout<<"True";
else cout<<"False";

}

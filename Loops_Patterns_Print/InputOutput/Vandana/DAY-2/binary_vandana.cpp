#include<iostream>
#include<math.h>
#include<conio.h>
using namespace std;
int main(){
int i,l=0,j,t,n,rem;
cout<<"Enter the test number of test cases\n";
cin>>t;
for(i=1;i<=t;i++){
    cin>>n;
    int dec=0;
   while(n!=0){
    rem = n%10;
    dec+=rem*pow(2,l);
    n/=10;
    l++;
   }cout<<dec;
}

}


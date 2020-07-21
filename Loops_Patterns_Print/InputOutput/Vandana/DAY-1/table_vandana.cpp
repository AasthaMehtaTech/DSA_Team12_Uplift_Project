#include<conio.h>
#include<iostream>
using namespace std;
int main(){
int n,i;
cout<<"Enter the value of n\n";
cin>>n;
for(i=1;i<=10;i++){
    cout<<n<<"*"<<i<<"="<<n*i<<"\n";
}
getch();
return 0;
}


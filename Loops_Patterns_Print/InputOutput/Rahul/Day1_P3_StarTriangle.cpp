#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int n,i,j; // Declaration of number & loop iterators
	cout<<"Enter the Number to Print Star Pattern \n";
	cin>>n; // Takes input from User
	for(i=0;i<n;i++){ // for loop is used for lines 
		for(j=0;j<=i;j++){ // for loop is used for printing 
			cout<<"*";    // * is printing in this
		}cout<<endl;    // endl is used for going new line 
	}
		
	return 0;
}

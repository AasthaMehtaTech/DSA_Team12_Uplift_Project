#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int num,LoopIterator; // Declares Number 
	cout<<"Enter the Number to Print Table of that Number\n";
	cin>>num; // Takes input from User
	for(LoopIterator=0;LoopIterator<=10;LoopIterator++) // for Loop to Repeat each Iterations
		cout<<num <<" * "<<LoopIterator<<" = "<<num*LoopIterator<<endl; //Print Table on Screen
	return 0;
}

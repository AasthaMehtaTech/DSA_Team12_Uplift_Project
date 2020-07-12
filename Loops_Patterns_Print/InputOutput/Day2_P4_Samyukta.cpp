#include <iostream>
#include<math.h>
using namespace std;

int main() {
	int n,i,num,arm=0,l,m;
	cin>>n;                     //number
	m=n;                        //copy of number
	l=floor(log10(n)+1);        //no. of digits in number
	for(i=0;i<l;i++)
	{
	    num=n%10;               //getting last one digit
	    arm=arm+pow(num,l);     
	    n=n/10;                 //modify number by leaving last digit
	}
	if(arm==m)
	cout<<"true";
	else cout<<"false";
	return 0;
}

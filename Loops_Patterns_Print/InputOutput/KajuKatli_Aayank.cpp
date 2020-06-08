#include <iostream>
using namespace std;

int main() {
	int num;
	cin>>num;
	
	for(int i = 1; i <= num; i++)
	{
		for(int j = i; j <= num ; j++)
		{
			cout<<" ";
		}
		
		for(int k = 1; k <= i; k++)
		{
			cout<<"* ";
		}
		cout<<endl;
	}
	
	for(int i = 1; i <= num; i++)
	{
		for(int k=1;k<=i;k++)
			{
				cout<<" "; 
			}
			
		for(int j=num-1;j>=i;j--)
			{
				cout<<" *";
			}
			
		cout<<endl;
	}
}
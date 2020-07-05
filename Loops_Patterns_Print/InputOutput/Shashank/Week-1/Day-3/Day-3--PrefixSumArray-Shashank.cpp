#include <bits/stdc++.h> 
using namespace std; 
  
int main(){
		int n ;
		cout << "Enter value of n : ";
		cin >> n;
		int a[n];
		
		for(int i=0;i<n;i++)
		{
			cout << "Enter elements at "<< i <<"th index : ";
			cin >> a[i];
		}
		
		cout << "Prefix array from given Array is : ";
		int prefix = a[0];
		for(int i=0;i<n;i++)
		{
	        if(i==0)
	        {
	        	cout << a[0] << " ";
	        	
	        }
	        else
	        {  	
	      prefix +=a[i];
	      cout << prefix << " ";
		 }
		}
		return 0;
	}

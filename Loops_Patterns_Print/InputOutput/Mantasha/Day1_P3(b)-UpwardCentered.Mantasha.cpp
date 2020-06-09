/*
Upward centered (Eg: n=3)

     *
    * *
   * * *
   
*/

#include <iostream>
using namespace std;

int main(){
	
	int n;
	cout << "Enter no. of rows : ";	
	cin >> n;
	
	for(int i=1; i<=n; i++){	//loop for rows
		
		for(int j=n; j >= i ; j--){ 	//loop for spaces
				cout << " ";
		}
		
		for(int k=1; k<=i; k++){	//loop for *
			cout << "* ";
		}
		
			cout << endl;
		}	
	return 0;
}

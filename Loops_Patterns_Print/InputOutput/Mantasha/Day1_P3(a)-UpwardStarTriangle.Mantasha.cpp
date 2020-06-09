/*
Upward Star Triangle with n lines (n: I/P) (Eg: n=3)

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
	for(int i=1; i<= n; i++){
		for(int j=1; j<=i; j++){
			cout << "* ";
		}
		cout << endl;
	}
	return 0;
}

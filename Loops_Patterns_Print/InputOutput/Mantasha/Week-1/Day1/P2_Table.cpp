/*
	Take a I/P number, print its table
*/
#include <iostream>

using namespace std;

int main(){
	
	int number;
	cout << "Enter a number : ";
	cin >> number;
	int table = 1;
	for(int i=1; i<=10; i++){
		table = number * i;
		cout << number << "x" << i << "=" << table << endl;
	}
	
	return 0;
}

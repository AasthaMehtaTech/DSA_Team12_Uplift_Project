#include <iostream>
using namespace std;

int main(){
	int a=0, b=1, c, rows;
	cout << "Enter no. of rows : ";
	cin >> rows;
	for(int i=0; i<=rows; i++){
		for(int j=0; j<i; j++){
			cout << a << "\t";
			c=a+b;
			a=b;
			b=c;
		}
		cout << endl;		
	}
	return 0;
}

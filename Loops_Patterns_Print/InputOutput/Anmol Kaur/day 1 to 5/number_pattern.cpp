#include <iostream>
using namespace std;

int main(){

	int n;
	cin >> n;
	int spaces = (2*n) + (2*(n-2)) + 1 -3; //Logic for Space
	cout<<"spaces = "<<spaces<<endl;

	for(int i=1; i<=n; i++){
		for(int j=1; j<=i; j++) cout << j << " ";
		for(int j=0; j<spaces; j++){cout << " ";}
		for(int j=((i==n) ? i-1 : i); j>=1; j--){cout << j << " ";}

		spaces -= 4;
	  cout << endl;
}
return 0;
}

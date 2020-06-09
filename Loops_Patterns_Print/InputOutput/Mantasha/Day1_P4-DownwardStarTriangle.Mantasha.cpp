/*
Downward Star Triangle with n lines (Eg: n=4)
 * * * *
 * * *
 * *
 *
 
 */
 
 #include <iostream>
 using namespace std;
 
 int main(){
 	int n;
 	cin >> n;
 	for (int i=1;i<n+1; i++){
 		for(int j=n; j>=i; j--){
 			cout << "* ";
		 }
		 cout << endl;
	 }
	 return 0;
 }

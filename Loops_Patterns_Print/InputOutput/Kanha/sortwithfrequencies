#include<iostream>
#include<algorithm>
using namespace std;

bool compare(int a,int b){
	return a < b;
}

int main(){
	int n;
	cout << "Enter size of Array : ";
	cin >> n;
	int a[n];
	
	cout << "Enter elements in array : ";
	for (int i=0; i<n; i++){
		cin >> a[i];
	}
	
	sort(a,a+n,compare); //sort functions
	
	cout << "Soretd Array according to frequency : ";
	for (int i=0; i<n; i++){
		cout << a[i] << " ";
	}
	return 0;
}

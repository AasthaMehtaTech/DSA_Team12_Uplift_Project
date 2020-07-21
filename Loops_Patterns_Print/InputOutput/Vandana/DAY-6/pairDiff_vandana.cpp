#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;
int main(){
	int n,t,i,j,c=0;
	cout << "Enter size of Array : ";
	cin >> n;
	int a[n];

	cout << "Enter elements in array : ";
	for (int i=0; i<n; i++){
		cin >> a[i];
	}
	cout<<"Enter the target element\n";
	cin>>t;
	for (int i=0; i<n-1; i++){
            for(j=i+1;j<n;j++){
                if(abs(a[i]-a[j])== t)
                    c++;
            }
	}
	cout<<c<<endl;
}

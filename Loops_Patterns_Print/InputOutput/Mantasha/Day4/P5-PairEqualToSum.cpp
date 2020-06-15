#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout << "Enter size of array : ";
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++){
    	cout << "Insert element at " << i << "th element : ";
        cin >> a[i];
    }
    int Sum;
    cout <<"Enter Value of sum : ";
    cin >> Sum;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]+a[j]==Sum){
                cout << "Pair equal to sum is : " << a[i] << " and " <<a[j] <<endl;
            }
        }
    }
}

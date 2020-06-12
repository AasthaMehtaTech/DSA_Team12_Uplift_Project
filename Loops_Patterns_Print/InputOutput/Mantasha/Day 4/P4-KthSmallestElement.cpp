/*
		Link for Reference : https://afteracademy.com/blog/kth-smallest-element-in-an-array
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout << "Enter Size of Array : ";
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++){
    	cout << "Enter element at " << i << "th index : ";
        cin >> a[i];
    }
    int k;
    cout << "Enter Kth element : ";
    cin >> k;
    sort(a,a+n);
    cout<<a[k-1];
}

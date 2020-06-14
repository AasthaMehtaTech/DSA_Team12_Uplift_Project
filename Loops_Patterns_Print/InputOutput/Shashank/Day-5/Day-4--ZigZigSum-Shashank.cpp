#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout << "Enter order of matrix : ";
    cin>>n;
    int a[n][n];
    int sum=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
        	cout << "Enter elements in array : ";
            cin>>a[i][j];
            if(i==0||i==n-1){
                sum+=a[i][j];
            }
            else if(i+j==n-1){
                sum+=a[i][j];
            }
        }
    }
    cout << "The Zig Zag sum is : " << sum;
}

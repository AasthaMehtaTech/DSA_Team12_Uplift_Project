#include<bits/stdc++.h>
using namespace std;
int check(int a[][100],int m,int n,int x){
    int c=0;
    int r = m-1;
    int flag = 0;
    while(r>=0 && c<n){
        if(x == a[r][c]){
            cout<<"Element found\n";
            flag = 1;
            break;
        }
        else if(x>a[r][c]){
            c++;
        }
        else{
            r--;
        }
    }
    if(!flag)
        cout<<"Element not found";
}
int main(){
int n,m,x;
cout<<"Enter the rows & columns of the matrix\n";
    cin>>m>>n;
    int a[100][100];
        cout << "Enter elements \n";
		for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			cin >> a[i][j];
		}
		}
		cout<<"Enter x value\n";
		cin>>x;
		check(a,m,n,x);
}


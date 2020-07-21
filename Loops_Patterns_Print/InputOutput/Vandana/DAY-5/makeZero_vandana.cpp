#include <iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    int n,i,j,m,k;
    cout<<"Enter the rows & columns of the matrix\n";
    cin>>m>>n;
    int a[m][n],b[m][n];
        cout << "Enter elements \n";
		for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			cin >> a[i][j];
			b[i][j] = a[i][j];
		}
	}
for(int i=0; i<m; i++){
    for(int j=0; j<n; j++){
            if(a[i][j] == 0){
                for(k=0;k<n;k++)
                    b[i][k]=0;
                for(k=0;k<m;k++)
                    b[k][j]=0;
            }
    }
}
cout<<"Resultant Matrix is\n";
for(int i=0; i<m; i++){
    for(int j=0; j<n; j++){
        cout<<b[i][j]<<" ";
    }
    cout<<"\n";
}
}

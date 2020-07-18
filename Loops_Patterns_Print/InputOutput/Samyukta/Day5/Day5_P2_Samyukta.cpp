#include <iostream>
using namespace std;

int main() {
    int n,m,i,j;
    cin>>n>>m;
    int arr[n][m];
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }
    for(j=0;j<m;j++)
    {
        for(i=n-1;i>=0;i--)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
	return 0;
}

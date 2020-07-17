#include <iostream>
using namespace std;

int main() {
    int n,i,j,sum=0;
    cin>>n;
    int arr[n][n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>arr[i][j];
            if(i==0||i==n-1)
            {
                sum+=arr[i][j];
            }
            else if((i+j)==(n-1))
            {
                sum+=arr[i][j];
            }
        }
    }
    cout<<sum;
	return 0;
}

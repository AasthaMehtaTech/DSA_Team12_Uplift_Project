#include <iostream>
using namespace std;
void search(int arr[][100],int m,int n,int x)
{
    int r=n-1;
    int c=0;
    int flag=0;
    int smallest=arr[0][0];
    int largest=arr[m-1][n-1];
    while(r>=0 && c<n)
    {
        if(x<smallest && x>largest)
        {
            cout<<"not found";
            break;
        }
        if(arr[r][c] == x)
        {
            cout<<"found";
            flag=1;
            break;
        }
        else if(arr[r][c] > x)
        {
            r--;
        }
        else if(arr[r][c] < x)
        {
            c++;
        }
    }
    if(flag==0)
    {
        cout<<"not found";
    }
}
int main() {
    int m,n,i,j,x;
    cin>>m>>n;
    int arr[100][100];
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }
    cin>>x;
    search(arr,m,n,x);
    
	return 0;
}

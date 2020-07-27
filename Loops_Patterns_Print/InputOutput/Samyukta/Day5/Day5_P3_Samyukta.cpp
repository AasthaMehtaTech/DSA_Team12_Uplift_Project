#include <iostream>
using namespace std;

int main() {
    int k=0,l=0,m,n,i,j,score=1,s;
    cin>>n;
    m=n;
    s=n;
    int arr1[m][n]={{0},{0}};
    while(k<m && l<n)
    {
        for(i=k;i<m;i++)             //k column start, m- max column
        {                            //l row start, n- max row
            arr1[l][i]=score;
            score++;
        }
        l++;
        for(i=l;i<n;i++)
        {
            arr1[i][m-1]=score;
            score++;
        }
        m--;
        if(k<m)
        {
            for(i=m-1;i>=k;i--)
            {
            arr1[n-1][i]=score;
            score++;
            }
            n--;
        }
        if(l<n)
        {
             for(i=n-1;i>=l;i--)
             {
            arr1[i][k]=score;
            score++;
             }
             k++;
        }
    }
    for(i=0;i<s;i++)
    {
        for(j=0;j<s;j++)
        {
            cout<<arr1[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}

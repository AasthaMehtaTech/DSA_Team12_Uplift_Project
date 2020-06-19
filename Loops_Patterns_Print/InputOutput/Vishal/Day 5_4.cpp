 #include <iostream>
#include <string>
using namespace std;
int main()
{
	int r,c;
    cin>>r>>c;
    int a[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>a[i][j];
        }
    }
    int total=r*c;
    int rmin=0;
    int rmax=r-1;
    int cmin=0;
    int cmax=c-1;
    int count=0;
 while(count<total)
 {
    //right(ROW CONSTANT)
    for(int i=cmin;i<=cmax && count<total;i++)
    {
     cout<<a[rmin][i]<<" ";
        count++;
    }
    rmin++;
    //bottom(COLUMN CONSTANT)
    for(int i=rmin;i<=rmax && count<total;i++)
    {
     cout<<a[i][cmax]<<" ";
        count++;
    }
    cmax--;
    //left(ROW CONSTANT)
     for(int i=cmax;i>=cmin && count<total;i--)
    {
     cout<<a[rmax][i]<<" ";
        count++;
    }
    rmax--;
    //top(COLUMN CONSTANT)
       for(int i=rmax;i>=rmin && count<total;i--)
    {
     cout<<a[i][cmin]<<" ";
        count++;
    }
    cmin++;
}
}
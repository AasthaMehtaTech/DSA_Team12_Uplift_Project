#include <iostream>
using namespace std;

int main() {                                    //time_complexity=o(m*n)
	int m,n,i,j;                                //space_complexity=o(1)
	bool row_flag=false,column_flag=false;
	cin>>m>>n;
	int arr[m][n];
	for(i=0;i<n;i++)
	{
	    for(j=0;j<m;j++)
	    {
	        cin>>arr[i][j];                    //scanning all elements
	    }
	}
	for(i=0;i<n;i++)
	{
	    for(j=0;j<m;j++)
	    {
	        if(i==0&&arr[i][j]==0)             //if any element in row 0 then we will make that 
	        {                                  // full row 0 later with the help of row_flag
	            row_flag=true;
	        }
	        if(j==0&&arr[i][j]==0)             //if any element in column 0 then...
	        {
	            column_flag=true;
	        }
	        if(arr[i][j]==0)      //except row 0 and column 0 because that case under upper condition
	        {
	            arr[0][j]=0;       //if any element inside is 0 then we make corresponding row and column
	            arr[i][0]=0;       // 0 by saving extra space
	        }
	    }
	}
	for(i=1;i<n;i++)
	{
	    for(j=1;j<m;j++)
	    {
	      if(arr[i][0]==0||arr[0][j]==0)       // as we have made row-0 and column-0 = 0 if corresponding
	        {                                  //element is 0. so if we make any row-0, column-0 =0,
	           arr[i][j]=0;                    //then make whole row or column 0
	        }
	    }
	}
	if(column_flag==true)                  //for upper border, if any element is 0, then make whole
	{                                      // upper border (row-0) =0
	   // cout<<"column_flag";
	    for(i=0;i<n;i++)
	    {
	        arr[i][0]=0;
	    }
	}
	if(row_flag==true)                  //for left border, if...
	{
	    for(j=0;j<m;j++)
	    {
	        arr[0][j]=0;
	    }
	}
	for(i=0;i<n;i++)               //printing
	{
	    for(j=0;j<m;j++)
	    {
	        cout<<arr[i][j]<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}

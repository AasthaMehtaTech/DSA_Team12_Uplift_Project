package clockwise_spirally_increasing_pattern;

import java.util.Scanner;

public class Test {

	public static void main(String[] args) {
		int n,i,l=0,k=0;
		
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter the value of n");
		n = sc.nextInt();
		int a[][] = new int[n][n];
		//k points to row 
		//l points to column
		int last_row = n-1 , last_col = n-1,count=0;
		while(k<=last_row&&l<=last_col)
		{
			for( i= k ; i<=last_col;i++ )
			{
				
				a[k][i] = ++count;
			}
			k++;
			for(i=k; i<=last_row;i++)
			{
				a[i][last_col] = ++count;
			}
			last_col--;
			if(k<=last_row)
			{
				for(i=last_col;i>=l;i--)
				{
					a[last_row][i] = ++count;
				}
				last_row--;
			}
		  if(l<=last_col)
		  {
			  for(i=last_row;i>=k;i--)
			  {
				  a[i][l] = ++count;
			  }
			  l++;
		  }
		}
	
      for(i=0;i<n;i++)
      {
    	  for(int j=0;j<n;j++)
    	  { 
    		  if(a[i][j]<=n)
    		  {
    			  System.out.print(a[i][j]+ "  ");
    		  }
    		  else {
    		  System.out.print(a[i][j]+ " ");
    	  }
    	  }		  
    	  System.out.println();
      }
	}

}

import java.util.Scanner;

public class Anticlock {

	public static void main(String[] args) {
		int i,j,m,n,temp;
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter value of rows");
	   m = sc.nextInt();
	   System.out.println("Enter value of rows");
       n =sc.nextInt();
       int a[][] = new int[m][n];
       System.out.println("Enter the cost adjacency matrix");
       for(i=0;i<m;i++)
       {
    	   for( j=0;j<n;j++)
    	   {
    		  a[i][j] = sc.nextInt();
    	   }
    	  
       }
	int b[][] = new int[n][m];
   //to find transpose of the matrix
	for( i=0;i<n;i++)
	{
		 for(j=0;j<m;j++)
		 {
			 b[i][j] = a[j][i];
		 }
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			System.out.print(b[i][j]);
		}
		System.out.println();
	}
	//to interchange rows to rotate
	//int k = n;
	for(i=0;i<n/2;i++)
	{
		for(j=0;j<m;j++)
		{
			temp = b[i][j];
			b[i][j] = b[n-i-1][j];
			b[n-i-1][j] = temp;
		}
	}
	
	for(i=0;i<n;i++)
    {
 	   for( j=0;j<m;j++)
 	   {
 		  System.out.print(b[i][j] + " "); 
 	   }
 	  System.out.println();
    }
	}
}
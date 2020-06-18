package transporse;

class GFG{
	// Driver code 
	public static void main (String[] args) 
	{ 
		int A[][] = { {1,4,8,11},
		    	{2,5,9,12},
		    	{3,6,10,13},
		    	};
	
		int B[][] = new int[4][3], i, j; 
		for (i = 0; i < 4; i++) 
		{
			for (j = 0; j < 3; j++) 
			{	B[i][j] = A[j][i]; 
		
			}
	     } 
		System.out.println("After transporse");
		System.out.print("Result matrix is \n"); 
		for ( i = 0; i < 4; i++) 
		{ 
			for ( j = 0; j < 3; j++) 
			{
			System.out.print(B[i][j] + " "); 
			}
			System.out.print("\n"); 
		} 
		for( i=0;i<4;i++)
	    {
	     for( j=0;j<3/2;j++)
	     {
	         //System.out.print(mat[i][j] + " ");
	        int temp = B[i][j];
	        B[i][j]= B[i][3-j-1];
	        B[i][3-j-1] = temp;
	    }
    	}
		System.out.print("Result matrix is \n"); 
		for ( i = 0; i < 4; i++) 
		{ 
			for ( j = 0; j < 3; j++) 
			{
			System.out.print(B[i][j] + " "); 
			}
			System.out.print("\n"); 
		} 
	} 
} 

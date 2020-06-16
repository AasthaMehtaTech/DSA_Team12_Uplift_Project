package printSpirally;

public class spiral {

	public static void main(String[] args) 
	{
	    int mat [][] =  { 
	    		          {1  , 2 ,  3  , 4},
	                      {5  ,  6 ,  7  , 8},
	                      { 9 ,  10 , 11 , 12},
	                      { 13 , 14 , 15 , 16}
	                      };
	    int m = 4,n=4;
	    print_spiral(mat,m,n);
	}
	static void print_spiral(int [][]mat,int m,int n)
	{
		int i,k=0,l=0;
		//k is used to keep track of rows
		//l is used to keep track of columns
		int last_row = m-1,last_col = n-1;
		while(k<=last_row && l <=last_col)
		{
			for(i=k;i<=last_col;i++)
			{
				System.out.print(mat[k][i] + " ");
			}
			k++;
			for(i=k;i<=last_row;i++)
			{
				System.out.print(mat[i][last_col] + " ");
			}
			last_col--;
			if(k<=last_row)
			{
				for(i=last_col;i>=l;i--)
				{
					System.out.print(mat[last_row][i] + " ");
				}
				last_row--;
			}
			if(l<=last_col)
			{
				for(i=last_row;i>=k;i--)
				{
					System.out.print(mat[i][l] + " ");
				}
				l++;
			}
		}
	}

}

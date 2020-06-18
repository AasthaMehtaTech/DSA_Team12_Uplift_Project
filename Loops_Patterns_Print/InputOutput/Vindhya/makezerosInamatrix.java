package makeZeros;

import java.util.Scanner;

public class Test
{

	public static void main(String[] args) 
	{
		// TODO Auto-generated method stub
		int mat[ ][ ] = { {0, 1, 1, 1}, 
                {1, 1, 1, 1}, 
                {1, 1, 1, 1},};
		Scanner sc =new Scanner(System.in);
            
      int Row[] = new int[3];
      int col[] = new int[4];
     
      for(int i=0;i<3;i++)
      {
    	 for(int j=0;j<4;j++)
    	 {
    		if(mat[i][j]==0)
    		{
    			Row[i] = 1;
    			col[i]=1;
    		}
    	 }
      }
       for(int i=0;i<3;i++)
       {
    	   for(int j=0;j<4;j++)
    	   {
    		   if(col[j]==1|| Row[i]==1)
    		   {
    			   mat[i][j]=0;
    		   }
    	   }
       }
       //to print it afterwards
       for(int i=0;i<3;i++)
       {
    	   for(int j=0;j<4;j++)
    	   {
    		   System.out.print(mat[i][j]);
    	   }
    	   System.out.println();
       }
     
    
}  

	}



import java.util.Scanner;

public class p2_day2_vindhya 
{

	public static void main(String[] args)
	{
		int n;
		Scanner sc =new Scanner(System.in);
		System.out.println("Enter value of n");
		n=sc.nextInt();
		printPattern(n);

	}
   
    static void printPattern(int n)
    {
    	//to keep track of number of rows
    	for(int i=1;i<=n;i++)
	{
	    int k=1; //to keep track of left side variable
	   int l=i; //to keep track of right side variables
	 //to keep track of number of columns	
	    for(int j=1;j<=(2*n)-1;j++)
	    {    
	        if(i>=j|| j >= (2*n)-i)
	        {
	            if(j>=(2*n)-i)
	            {
	               System.out.print( l  ); 
	                l--;
	            }
	            else{
	            	System.out.print(k );
	            	k++;
	            }
	        }
	        else
	        {
	            	System.out.print(" ");
	        }
	    }
	    
	    	System.out.println();
    }
}






/*
 * we need to print 
 *   1            1
 *   1 2       2  1
 *   1 2 3   3 2  1
 *   1 2 3 4 3 2  2
 *   Always number of spaces  = (lines*2)-2
 *  1           1
    1 2       2 1
    1 2 3   3 2 1
    1 2 3 4 3 2 1
 */

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
    	int m=1;
    	for(int i=1;i<=n;i++)
    	{
    		for(int j=1;j<n*2;j++)
    		{
    			if(j<=i || j>=n*2-i)
    			{
    				if(j<=i)
    				{	
    				System.out.print(j);
    				
    				}
    				else
    				{
    					
    					System.out.print(  m );
    					
    					m++;
    				}
    			}
    			
    			
    			else
    			{
    				System.out.print(" ");
    			}
    			
    		}
    		m=1;
    		System.out.println( );
    	}
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

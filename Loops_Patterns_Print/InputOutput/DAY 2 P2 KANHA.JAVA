import java.util.Scanner;

public class p2_day2_kanha 
{

	public static void main(String[] args)
	{
		Scanner sc =new Scanner(System.in);
		int n=sc.nextInt();
    for(int i=1;i<=n;i++)
	{
	    int k=1; 
	   int l=i; 
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
		
	}
   
   

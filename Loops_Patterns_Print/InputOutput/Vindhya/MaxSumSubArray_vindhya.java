import java.util.Scanner;

class GFG
{
	public static void main (String[] args) 
	{
	    
	   Scanner sc = new Scanner(System.in);
	   int T = sc.nextInt();
	   for(int i=0;i<T;i++)
	   {
	       int n = sc.nextInt();
	       int a[] = new int[n];
	       for(int j=0;j<n;j++)
	       {
	           a[j] = sc.nextInt();
	       }
	        maxSumsubarray(a,n); 
	   
	   }
	       
	      
	      
	}
	
	static void  maxSumsubarray(int a[],int n)
	{
	    int maxtillHere = a[0],maxElement = a[0];
	    for(int i=1;i<n;i++)
	    {
	         if(a[i] < maxtillHere + a[i] )
	         {
	             maxtillHere = maxtillHere + a[i];
	         }
	         else
	         {
	             maxtillHere = a[i];
	         }
	         if(maxElement <  maxtillHere )
	         {
	             maxElement =  maxtillHere;
	         }
	         
	    }
	    System.out.println(maxElement);
	}
}
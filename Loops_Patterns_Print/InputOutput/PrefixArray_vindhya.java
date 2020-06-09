import java.util.Scanner;

public class PrefixArray_vindhya 
{

	public static void main(String[] args)
	{
		int n ;
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter value of n");
		n = sc.nextInt();
		int a[] = new int[n];
		System.out.println("Enter the elements");
		for(int i=0;i<n;i++)
		{
			a[i] = sc.nextInt();
		}
		System.out.println("Prifix array from given Array is");
		int prefix = a[0];
		for(int i=0;i<n;i++)
		{
	        if(i==0)
	        {
	        	System.out.print(a[0] + " ");
	        	
	        }
	        else
	        {  	
	      prefix +=a[i];
	      System.out.print(prefix + " ");
		 }
		}
	}

	

}
	
	
	
	
	
	
	
	
	
	
	
	
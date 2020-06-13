import java.util.Scanner;

class GFG {
	public static void main (String[] args) {

		System.out.println("Enter number of test cases");
		Scanner sc = new Scanner(System.in);
		
	
	 int T =sc.nextInt();
	  
	 
	
	for(int i=0;i<T;i++)
	{
		System.out.println("Enter number of elements of array");
		 int n = sc.nextInt();
		  int a[] = new int[n];
		  System.out.println("Enter elements of array");
	    for(int j=0;j<n-1;j++)
	    {
	        a[j] = sc.nextInt();
	    }
	    findMissing(a,n);	 
	}
  
	   
	}
	 static void findMissing(int a[],int n)
	{
	    	int m = n+1;
	    	int sum = (m*n)/2;
	    	System.out.println(sum);
		for(int j=0;j<a.length-1;j++)
		{
			
			sum = sum-a[j];
		}
		 System.out.println(sum);
	}
}
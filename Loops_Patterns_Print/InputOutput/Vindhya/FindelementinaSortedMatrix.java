import java.util.Scanner;

public class traversal {

	public static void main(String[] args) 
	{
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter the size of matrix");
		
		int n = sc.nextInt();
       int i=0,j=n-1;
       int a[][] = {{10,20,30,40},
    		   {12,22,33,45},
    		   {14,24,44,47},
    		   {16,26,46,50}};
       System.out.println("Enter the element to be searched");
       int s = sc.nextInt();
       
       while(i<n&&j>=0)
     {
    	if(s==a[i][j])
    	{
    		System.out.println("Element found");
    		System.exit(0);
    	}
    	else if(s<a[i][j])
    	{
    		j--;
    	}
    	else
    	{
    		i++;
    	}
    	
      }
       System.out.println("Element not found");  
	}

}

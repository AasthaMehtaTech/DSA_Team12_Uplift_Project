import java.util.Scanner;

public class Root {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
         Scanner sc = new Scanner(System.in);
         System.out.println("Enter value of n");
        int n = sc.nextInt();
        
         for(int j=1;j*j<=n;j++)
         {
        	 if(n%j==0&&n/j==j)
        	 {
        		 System.out.println("square root of"+n +"is"+j);
        		 System.exit(0);
        	 }
        	 
        	
         }
         int i;
         for( i=1;i*i<=n;i++)
         {
        	     
        		
        	 }
         System.out.println("the value of i" + i);
        	 int sq =  n /(i-1);
        	 System.out.println("square root of"+n +"is"+sq);
        	
         }
         
	}



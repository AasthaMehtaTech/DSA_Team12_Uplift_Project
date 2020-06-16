import java.util.Scanner;

public class zigzag_vindhya {

	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		//accept value of n
		System.out.println("Enter value of n");
		int n = sc.nextInt();
		int a[][] = new int[n][n];
		System.out.println("Enter Array elements");
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				a[i][j] = sc.nextInt();
			}
		}
		int sum =0;
         for(int i=0;i<n;i++)
         {
        	 for(int j=0;j<n;j++)
        	 {
        		 if(i==0)
        		 {
        			 sum = sum + a[i][j];
        		 }
        		 else if (i ==n-1)
        		 {
        			 sum = sum + a[i][j];
        		 }
        		 else
        		 {
        			 sum  = sum + a[i][n-i-1];
        			 break;
        		 }
        		 
        	 }
         }
         System.out.println("Sum is" + sum);
	}

}

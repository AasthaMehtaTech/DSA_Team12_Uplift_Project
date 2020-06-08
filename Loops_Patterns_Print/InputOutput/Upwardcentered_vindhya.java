import java.util.Scanner;

public class Upwardcentered_vindhya {

	public static void main(String[] args) {
	 int n ;
	 Scanner sc = new Scanner(System.in);
	 System.out.println("Enter value of n");
	 n = sc.nextInt();
	 patternPrint(n);

	}
   static void  patternPrint(int n)
   {
	   for(int row = 1;row<=n ; row++ )
	   {
		   for(int space = 1 ; space <= n-row; space++)
		   {
			   System.out.print(" ");
		   }
		   for(int col = 1;col<=row ; col++)
		   {
			   System.out.print("*" + " ");
		   }
		   System.out.println();
	   }
	  
   }
}

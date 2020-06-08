import java.util.Scanner;

public class KajuKatli_vindhya {
 public static void main(String[] args) {
				// TODO Auto-generated method stub
				int n;
				Scanner sc =new Scanner(System.in);
				System.out.println("Enter the value of n");
		            n = sc.nextInt();
		            ptternPrint(n);
		            
			}
		 static void ptternPrint(int n)
		 {
			 for(int i=1;i<=n;i++)
			 {
				 for(int k=n;k>i;k--)
				 {
					 System.out.print(" ");
				 }
				 for(int j=1;j<=i;j++)
				 {
					 System.out.print(" "+"*");
				 }
				 System.out.println();
			 }
			 for(int i=1;i<=n-1;i++)
			 {
				
				 for(int k=1;k<=i;k++)
				 {
					 System.out.print(" ");
				 }
				 for(int j=n-1;j>=i;j--)
				 {
					 System.out.print( " "+"*");
				 }
				 System.out.println();
			 }
		 }
		


	}



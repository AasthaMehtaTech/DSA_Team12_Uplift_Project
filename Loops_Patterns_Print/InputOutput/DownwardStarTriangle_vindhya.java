import java.util.Scanner;

public class DownwardStarTriangle_vindhya {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int n ;
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter the value of n");
		n = sc.nextInt();
     printPattern(n);
	}
 static void printPattern(int n)
 {
	 for(int row =1 ;row<=n;row++)
	 {
		 for(int col=n;col>=row;col--)
		 {
			 System.out.print("*" + " ");
		 }
		 System.out.println();
	 }
 }
}

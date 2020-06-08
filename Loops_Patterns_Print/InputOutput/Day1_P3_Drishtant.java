import java.util.Scanner;

public class Day1_P3_Drishtant {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();//here n is the number of rows
		for(int i=1;i<=n;i++) {
			for(int j=1;j<=i;j++) {
				System.out.print("*"+" ");
			}System.out.println();
		}//The outer for loop prints the row and the inner loop prints the column
	}

}

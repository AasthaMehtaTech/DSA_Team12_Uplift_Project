import java.util.Scanner;

public class Day1_P3b_Drishtant {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		int i = 1;
		while(i<=n) {
			int space = 1;
			while(space<=n-i) {
				System.out.print(" ");
				space++;
			}//This while loop is used to print spaces in a row before the pattern
			int j = 1;
			while(j<=i) {
				System.out.print("* ");
				j++;
			}
			System.out.println();
			i++;
		}
	}

}

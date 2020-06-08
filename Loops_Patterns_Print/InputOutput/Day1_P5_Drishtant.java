import java.util.Scanner;

public class Day1_P5_Drishtant {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		int i=1;
		while(i<=n) {
			int space = 1;
			while(space<=n-i) {
				System.out.print(" ");
				space++;
			}
			int j =1 ;
			while(j<=i) {
				System.out.print("* ");
				j++;
			}
			System.out.println();
			i++;
		}
		//This part is for the lower part of the pattern
		int k=1;
		while(k<=n-1) {
			int space_m = 0;
			while(space_m<=k-1) {
				System.out.print(" ");//Used to print spaces in the front
				space_m++;
			}
			int p=1;
			while(p<=n-k) {
				System.out.print("* ");
				p++;
			}
			System.out.println();
			k++;
	}

	}
}

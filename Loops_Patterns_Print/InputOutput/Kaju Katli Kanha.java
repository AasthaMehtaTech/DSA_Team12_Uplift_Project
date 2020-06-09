package basics;

import java.util.Scanner;

public class Pattern21 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner scn = new Scanner(System.in);
		System.out.println("Enter no of rows");
		int n = scn.nextInt();
		for (int i = 1; i <= n; i++) {
			int k = 0;
			while (k != n - i) {
				System.out.print(" ");
				k++;
			}
			for (int j = 0; j <= (2 * i) - 1; j++) {
				if ((j % 2) == 0) {
					System.out.print("*");
				} else {
					System.out.print(" ");
				}
			}
			System.out.println();
		}
		for (int i = n-1; i >= 0; i--) {
			int k = 0;
			while (k != n - i) {
				System.out.print(" ");
				k++;
			}
			for (int j = 0; j <= (2 * i) - 1; j++) {
				if ((j % 2) == 0) {
					System.out.print("*");
				} else {
					System.out.print(" ");
				}
			}
			System.out.println();
		}
		scn.close();

	}

}

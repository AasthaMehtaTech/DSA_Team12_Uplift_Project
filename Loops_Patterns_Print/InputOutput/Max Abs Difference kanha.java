package FunctionAnd1DArray;

import java.util.Scanner;

public class MaxAbsoluteDiff_kanha {

	public static void main(String[] args) {

		Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();
		int a[] = new int[n];
		for (int i = 0; i < n; i++) {
			a[i] = sc.nextInt();
		}
		int max = 0, d;
		for (int i = 0; i < n-1; i++) {
				d= a[i] - a[i + 1];
				if (Math.abs(d) > max_diff) {
					max = Math.abs(diff);
			}
		}
		System.out.println( max);
	}
}

import java.util.*;
public class Day3_P2_Drishtant {
 
	public static long squareSum(int arr[],int n) {
		long sum = 0;
		for(int i=0;i<n;i++) {
			sum = sum+ arr[i]*arr[i];
		}
		return sum;
	}
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		int arr[] = new int[n];
		for(int i=0;i<n;i++) {
			arr[i] = sc.nextInt();
		}
		System.out.println(squareSum(arr,n));
	}

}

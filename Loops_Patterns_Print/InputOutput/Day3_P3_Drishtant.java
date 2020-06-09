import java.util.*;
public class Day3_P3_Drishtant {

	public static int[] prefix(int arr[],int n) {
		int brr[] = new int[n];
		brr[0] = arr[0];
		for(int i=1;i<n;i++) {
			brr[i] = arr[i] + brr[i-1];
		}
		return brr;
	}
	
	
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		int arr[] = new int[n];
		for(int i=0;i<n;i++) {
			arr[i] = sc.nextInt();
		}
		int prr[]=prefix(arr,n);
		for(int i=0;i<n;i++) {
			System.out.print(prr[i]+" ");
		}
	}

}
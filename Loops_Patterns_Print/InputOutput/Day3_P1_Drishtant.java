import java.util.*;
public class Day3_P1_Drishtant {

	public static int maximum(int arr[],int n) {
		int max = Integer.MIN_VALUE;
		for(int i=0;i<n;i++) {
			if(arr[i]>max) {
				max = arr[i];
			}
		}
		return max;
	}
	
	public static int minimum(int arr[],int n) {
		int min = Integer.MAX_VALUE;
		for(int i=0;i<n;i++) {
			if(arr[i]<min) {
				min = arr[i];
			}
		}
		return min;
	}
	
	
	
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		int arr[] = new int[n];
		for(int i=0;i<n;i++) {
			arr[i] = sc.nextInt();
		}
		int max = maximum(arr,n);
		int min = minimum(arr,n);
		System.out.println(max);
		System.out.println(min);
		System.out.println(max+min);
	}

}

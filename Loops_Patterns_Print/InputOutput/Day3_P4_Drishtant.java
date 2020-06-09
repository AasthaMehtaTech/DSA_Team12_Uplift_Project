import java.util.*;
import java.lang.Math;
public class Day3_P4_Drishtant {

	public static int absoluteMax(int arr[],int n) {
		int max = Integer.MIN_VALUE;
		for(int i=0;i<n-1;i++) {
			if(Math.abs(arr[i]-arr[i+1])>max) {
				max = Math.abs(arr[i]-arr[i+1]);
			}
		}
		return max;
	}
	
	
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		int arr[] = new int[n];
		for(int i=0;i<n;i++) {
			arr[i] = sc.nextInt();
		}
		
		System.out.println(absoluteMax(arr,n));
	}

}

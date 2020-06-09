import java.util.Scanner;

public class SumOfSquares_vindhya {

	public static void main(String[] args) {
		int n ;
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter value of n");
		n = sc.nextInt();
		int a[] = new int[n];
		System.out.println("Enter the elements");
		for(int i=0;i<n;i++)
		{
			a[i] = sc.nextInt();
		}
		System.out.println("Sum of squares of elements are");
		int sum =0;
		for(int i=0;i<n;i++)
		{
	      sum += a[i]*a[i];
	     
		}
		 System.out.println(sum);
	}

}

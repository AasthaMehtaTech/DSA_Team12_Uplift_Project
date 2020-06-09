import java.util.Scanner;

public class MaxAbsoluteDiff_vindhya {

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
		int max_diff =0,diff;
		for(int i=0;i<n;i++)
		{ 
			if(i+1<n)
			{
			 diff = a[i] - a[i + 1];
	        if(Math.abs(diff)>max_diff)
	        {
	        	 max_diff = Math.abs(diff);
	        }
			}
	      }
		System.out.println("Maximum absolute difference is" + max_diff);
		
	}
	}


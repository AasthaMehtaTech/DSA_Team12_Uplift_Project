import java.util.Scanner;

public class PrefixArray_kanha 
{

	public static void main(String[] args)
	{
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		int a[] = new int[n];
		for(int i=0;i<n;i++)
		{
			a[i] = sc.nextInt();
		}
		int prefix = 0;
		for(int i=0;i<n;i++)
		{
		      prefix +=a[i];
	      System.out.print(prefix + " ");
		 }
		}
	}

	

}
	

import java.util.Scanner;

public class MinMaxSum_vindhya {
	public static void main(String args [])
	{
	Scanner sc = new Scanner(System.in);
	int n = sc.nextInt();
	int a[] =  new int[n];
	   for(int i=0;i<n;i++)
		{
			a[i] = sc.nextInt();
		}
	int min = INTEGER.MAX_VALUE,max=INTEGER.MIN_VALUE;	
	for(int i=0;i<n;i++)
	{
		if(a[i]>max)
		{
			max = a[i];
		}
		else if(a[i]<min)
		{ 
			min = a[i];
		
		}
	}
	int sum = min + max;
	System.out.println(sum);

}
}

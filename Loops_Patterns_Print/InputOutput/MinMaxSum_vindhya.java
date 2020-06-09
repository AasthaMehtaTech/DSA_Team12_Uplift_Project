import java.util.Scanner;

public class MinMaxSum_vindhya {
	public static void main(String args [])
	{
	int n;
	Scanner sc = new Scanner(System.in);
	System.out.println("Enter the value of n");
	n = sc.nextInt();
	int a[] =  new int[n];
	System.out.println("Enter the Elements");
	   for(int i=0;i<n;i++)
		{
			a[i] = sc.nextInt();
		}
	int min = a[0],max=a[0];	
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
	System.out.println("Minimum element is:" +min);
	System.out.println("Maximum element is:" +max);
	System.out.println(sum);

}
}
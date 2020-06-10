package practiseProblems;

import java.util.Scanner;

public class prefixArray_Debdyuti
{
	public static void main(String args[])
	{
		Scanner input=new Scanner(System.in);
		
		System.out.println("Enter the no. of elements: ");
		int n=input.nextInt();
		
		int arr[]=new int[n];
		int prefixSum[]=new int[n];
		
		System.out.println("Enter the elements: ");
		for(int i=0;i<n;i++)
		{
			arr[i]=input.nextInt();
		}
		
		System.out.println("Prefix Array is: ");
		for(int i=1;i<n;i++)
		{
			prefixSum[0]=arr[0];
			prefixSum[i]=prefixSum[i-1]+arr[i];
		}
		
		for(int i=0;i<n;i++)
		{
			System.out.println(prefixSum[i]);
		}
		
	}
}

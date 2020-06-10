package practiseProblems;

import java.util.Scanner;

public class maxAbsDiff_Debdyuti {
	public static void main(String args[])
	{
		Scanner input=new Scanner(System.in);
		System.out.println("Enter no. of elements: ");
		int n=input.nextInt();
		int arr[]=new int[n];
		int diff[]=new int[n];
		int max=diff[0];
		System.out.println("Enter the elements: ");
		for(int i=0;i<n;i++)
			
		{
			arr[i]=input.nextInt();
		}
		
		
		for(int i=1;i<n;i++)
		{
			 diff[i]=Math.abs(arr[i]-arr[i-1]);
		}
		
		for(int i=0;i<n;i++)
		{
			
			if(diff[i]>max)
				max=diff[i];
		}
		
		System.out.println("Max absolute difference: "+max);
		
	}

}

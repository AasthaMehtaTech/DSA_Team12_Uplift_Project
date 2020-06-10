package practiseProblems;

import java.util.Scanner;

public class QUESTION2_Debdyuti
{
		public static void main(String args[])
		{
			int sum=0;
			Scanner input=new Scanner(System.in);
			
			System.out.println("Enter the no. of elements: ");
			int n=input.nextInt();
			
			int arr[]=new int[n];
			
			System.out.println("Enter the elements: ");
			for(int i=0;i<n;i++)
			{
				arr[i]=input.nextInt();
			}
			
			for(int i=0;i<n;i++)
			{
				double square=Math.pow(arr[i], 2);
				sum+=square;
			}
			
			System.out.println("Sum of Square of each element is: "+ sum);
			
			
		}

}

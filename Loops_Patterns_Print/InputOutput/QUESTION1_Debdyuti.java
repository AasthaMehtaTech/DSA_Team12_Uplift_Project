package practiseProblems;

import java.util.ArrayList;
import java.util.Collections;
import java.util.Scanner;

public class QUESTION1_Debdyuti
{
	public static void main(String args[])
	{
		
		
		int sum = 0;
		int min = 0;
		int max = 0;
		

		Scanner input = new Scanner (System.in);
		ArrayList<Integer> list = new ArrayList<Integer> ();
		
		System.out.println("Enter number of elements: ");
		int n=input.nextInt();
		
		 System.out.println("Enter elements:");
		
		 for (int i = 0; i < n; i++)
		{
				   
		    int num = input.nextInt();
		    list.add(num);

		   
		}
		 
		for (int i = 0; i < n; i++) 
		{
		 sum += list.get(i);
		}

		max = Collections.max(list);
		min = Collections.min(list);
		
		System.out.println("Sum: " + sum);
		System.out.println("Max: " + max);
		System.out.println("Min: " + min);
	}
}

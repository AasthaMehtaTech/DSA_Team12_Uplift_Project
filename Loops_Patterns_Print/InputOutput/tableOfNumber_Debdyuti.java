package practiceProblems;

import java.util.Scanner;

public class tableOfNumber_Debdyuti {
	
	public static void main(String args[]) {
		
		System.out.print("Enter the number whose table you want to print : ");
		
		Scanner input=new Scanner(System.in);
		int number=input.nextInt();
		
		for(int i=1;i<=12;i++)
		{
			int answer=number*i;
			System.out.println(number+ " * " +i+ " = " +answer);
		}
			
		
	}

}

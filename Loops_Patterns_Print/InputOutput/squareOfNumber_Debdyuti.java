package practiceProblems;

import java.util.Scanner;

public class squareOfNumber_Debdyuti {


	public static void main(String args[]) {
	
	
	System.out.print("Enter any number: ");
	
	Scanner input=new Scanner(System.in);
	double number=input.nextDouble();
	
	double square=Math.pow(number, 2);
	System.out.println("Square of " +number+" is: "+square);
	
	}
}

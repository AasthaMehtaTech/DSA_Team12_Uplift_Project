package practiceProblems;

import java.util.Scanner;

public class kajuKatli_Debdyuti {
public static void main(String args[]) {
		
		System.out.print("Enter number : ");
		
		Scanner input=new Scanner(System.in);
		int number=input.nextInt();
		
		
		 for(int i=0;i<=number;i++)
		   {
		     for( int j=1;j<=number-i;j++)
		    	 System.out.print(" ");
		     for( int j=1;j<=2*i-1;j++)
		    	 System.out.print("*");
		     System.out.print("\n");
		   }
		 
		   for(int i=number-1;i>=1;i--)
		   {
		     for(int j=1;j<=number-i;j++)
		    	 System.out.print(" ");
		     for(int j=1;j<=2*i-1;j++)
		       System.out.print("*");
		     System.out.print("\n");
		   }
		 
	}
	

}

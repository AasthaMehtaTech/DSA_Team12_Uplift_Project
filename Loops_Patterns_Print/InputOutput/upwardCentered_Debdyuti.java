package practiceProblems;

import java.util.Scanner;

public class upwardCentered_Debdyuti {
	
	public static void main(String args[])
	{
		System.out.print("Enter number : ");
		
		Scanner input=new Scanner(System.in);
		int number=input.nextInt();	
		
		for (int i=0; i<number; i++) 
        { 
  
           
            for (int j=number-i; j>1; j--) 
            { 
            
                System.out.print(" "); 
            } 
   
           
            for (int j=0; j<=i; j++ ) 
            { 
               
                System.out.print("* "); 
            } 
   
           
            System.out.println(); 
        }
	}
}

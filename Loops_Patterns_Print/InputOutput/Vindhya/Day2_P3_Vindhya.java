import java.util.Scanner;

public class Day2_P3_Vindhya {

	public static void main(String[] args) 
	{
	     int n;
	     Scanner sc =new Scanner(System.in);
         System.out.println("Enter value of n");
         n = sc.nextInt();
         printPattern(n);
	}
 static void  printPattern(int n)
 {  
	 int k=1; //to keep track of printing number
     for(int row=1;row<=n;row++)
     {   
         for(int col=n;col>=row;col--)
         {
             System.out.print(col+" ");
             k++;
         }
         k=1;
         //to print stars from the second row
        for(int star=2;star<(2*row)-1;star++)
        {
            System.out.print("* ");
        }
          
            
        System.out.println();
       }
	 
 }

}
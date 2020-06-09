package armstrongnumber;

import java.util.Scanner;

public class Armstrong_number_vindhya {

	public static void main(String[] args)
	{
		int num;
		Scanner sc =new Scanner(System.in);
		System.out.println("Enter the number");
		num = sc.nextInt();
		 int sum=0;
		 int real_num = num;
		 while(num!=0)
		 {
			 int rem = num % 10;
			 sum = sum + (rem*rem*rem);
			  num = num/10;
		 }
		 if(real_num==sum)
		 {
			 System.out.println( "true");
		 }
		 else
		 {
			 System.out.println( "false");
		 }
		
	}
 
}

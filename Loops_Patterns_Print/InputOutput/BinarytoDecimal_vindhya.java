package binaryTodecimal_vindhya;

import java.util.Scanner;

public class BinarytoDecimal_vindhya {

	public static void main(String[] args) {
		int n,bin;
		Scanner sc =new Scanner(System.in);
		System.out.println("Enter the value of n");
		n = sc.nextInt();
		
		for(int i=0;i<n;i++)
		{
			System.out.println("Enter the Binary digits whose decimal eqivalent should be find");
			bin = sc.nextInt();
			int res = binarytodecimal(bin);
			System.out.println(res);
		}
	}	
  static int binarytodecimal(int bin)
  {
	  int base=1,sum=0;
	   while(bin!=0)
	   {
		   int rem = bin%10;
		    sum = sum + rem*base;
		    bin = bin/10;
		    base = base*2;
	   }
	   return sum;
  }
	

}

package fibonacciusingPattern;

import java.util.Scanner;

public class PrintingFibonacci_vindhya {

	public static void main(String[] args)
	{
		// TODO Auto-generated method stub
          int n;
          Scanner sc = new Scanner(System.in);
          System.out.println("Enter n value");
          n = sc.nextInt();
          printpattern(n);
	}
  static void  printpattern(int n)
  {   
	  
	  int num=0, res;
	  //we are using two for loops to follow given pattern
	  for(int i=1;i<=n;i++)
	  {
		  for(int j=1;j<=i;j++)
		  {
			  //to find fibonacci value of number
			  res = fib(num);
			  System.out.print( res + " ");
			  num++;
		  }
		  System.out.println();
	  }
  }
  static int fib(int n)
  {
	  if(n==0|| n==1)
	  {
		  return n;
	  }
	  return (fib(n-1)+fib(n-2));
  }
}

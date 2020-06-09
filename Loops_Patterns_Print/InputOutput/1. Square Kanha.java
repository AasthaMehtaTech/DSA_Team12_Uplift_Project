import java.util.Scanner;

public class squareOfNumber {


	public static void main(String args[]) {
	
	Scanner input=new Scanner(System.in);
	double number=input.nextDouble();
	
	double square=Math.pow(number, 2);
	System.out.println(square);
	
	}
}

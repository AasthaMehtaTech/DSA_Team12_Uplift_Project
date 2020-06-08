import java.util.Scanner;

class Square_yash{
	static void Square(int n){
		System.out.print("Square of "+n+ " is "+n*n);
	}
    public static void main(String []arr){
	    int inputnum;
	    Scanner scan = new Scanner(System.in);
	    System.out.print("Enter a Number: ");
	    inputnum = scan.nextInt();
	    Square(inputnum);	
	}
}
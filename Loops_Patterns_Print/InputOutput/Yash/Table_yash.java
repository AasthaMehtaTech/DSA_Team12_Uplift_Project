import java.util.Scanner;

class Table_yash{
	public static void main(String []arr){
	int num, i;
	Scanner scan = new Scanner(System.in);
	System.out.print("Enter a number: ");
	num = scan.nextInt();
	for(i =1; i<=10; i++){
	System.out.println(num +" x "+i+" = " +num*i);
	}	
}
}
import java.util.Scanner;

class Table_yash{
	static void printTable(int n){
		for(int i =1; i<=10; i++){
			System.out.println(n+" x "+i+" = " +n*i);
		}
	}	
	public static void main(String []arr){
		int inputnum;
		Scanner scan = new Scanner(System.in);
		System.out.print("Enter a number: ");
		inputnum = scan.nextInt();
		printTable(inputnum);
	}
}
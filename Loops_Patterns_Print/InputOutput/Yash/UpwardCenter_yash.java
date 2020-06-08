import java.util.Scanner;

class UpwardCenter_yash{
	static void Pyramid(int n){
		for(int i=1; i<=n; i++){
			for(int j=n; j>=i; j--){
				System.out.print(" ");
			}
			for(int k=1; k <=i; k++){
				System.out.print(" *");
			}
			System.out.println();
		}
	}
	public static void main(String[] args) {
		int inputNum;
		Scanner scan = new Scanner(System.in);
		System.out.print("Enter a number: ");
		inputNum = scan.nextInt();
		Pyramid(inputNum);
	}
}

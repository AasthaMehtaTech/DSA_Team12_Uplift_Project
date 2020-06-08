import java.util.Scanner;

class UpwardStar_yash{
	static void UpdwardStar(int n){
		for(int i=1; i<=n; i++){
			for(int j=1; j<=i; j++){
				System.out.print(" *");
			}
			System.out.println();
		}
	}
	public static void main(String[] args) {
		int inputNum;
		Scanner scan = new Scanner(System.in);
		System.out.print("Entet a Number: ");
		inputNum = scan.nextInt();
		UpdwardStar(inputNum);
	}
}
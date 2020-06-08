import java.util.Scanner;

class DownwardStar_yash{
	static void DownwardTriangle(int n){	
		for(int i =1; i<=n; i++){
			for(int j =n; j>=i; j--){
				System.out.print("* ");
			}
			System.out.println();
		}
	}
	public static void main(String[] arr){
		int inputnum;
		Scanner scan = new Scanner(System.in);
		System.out.print("Enter a Number: ");
		inputnum = scan.nextInt();
		DownwardTriangle(inputnum);
	}
}
import java.util.*;
public class Day1_P2_Drishtant {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter a number :");
		int n = sc.nextInt();
		System.out.println("The table of" +n+"is");
		for(int i=1;i<=10;i++) {
			System.out.println(n+"*"+i+"="+n*i);
		}

	}

}

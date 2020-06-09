import java.util.Scanner;

public class downwardStarTriangle {

public static void main(String args[]) {
		
		Scanner in=new Scanner(System.in);
		int n=in.nextInt();
		for(int i=1;i<=number;i++)
		{
			for(int j=number;j>=i;j--)
			{
				System.out.print("*");
				
			}
			
			System.out.println();
		}
	}
	
}

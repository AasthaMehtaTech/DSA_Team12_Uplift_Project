import java.util.Scanner;

public class UpwardStarTriangle_vindhya {

	public static void main(String[] args) {
		
      int n;
      Scanner sc = new Scanner(System.in);
      
      System.out.println("Enter the value of n");
      n = sc.nextInt();
      UpweardstarTringle(n);
	}
  static  void  UpweardstarTringle(int n) 
  {
	  for(int row =1; row<=n ;row++)
	  {
		  for(int col = 1 ; col<=row ; col++)
		  {
			  System.out.print("*");
		  }
		  System.out.println();
	  }
    	
    }
    
}

import java.util.Scanner;

public class reverse {
	 
		 static int reverse(int x) {
		        long rev= 0;
		        while( x != 0)
		        {
		            rev= rev*10 + x % 10;
		            x= x/10;
		            if( rev > Integer.MAX_VALUE || rev < Integer.MIN_VALUE)
		                return 0;
		        }
		        return (int) rev;
		    }
	        
	       
	    

	public static void main(String[] args)
	{
		int n;
		Scanner sc = new Scanner(System.in);
		n = sc.nextInt();
			System.out.println(reverse(n));

	}
}

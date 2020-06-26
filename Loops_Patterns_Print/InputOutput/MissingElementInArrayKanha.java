import java.util.*;
public class missNumber {
 public static void main(String[] args) {

   int t;
   int[] arr= new int[]{1,2,3,4,6,7};
   t = 7;
   int sum = t * ((t + 1) / 2);
   int sum1 = 0;
   for (int i: arr) {
    sum1 += i;
   }
       System.out.print( sum - sum1);
	   System.out.print("\n");
  }
 }

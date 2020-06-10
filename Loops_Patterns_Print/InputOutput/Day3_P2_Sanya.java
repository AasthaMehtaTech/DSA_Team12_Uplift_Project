import java.util.*;
public class Solution
{
     public static void main(String args[])
     {
         Scanner x=new Scanner(System.in);
        
         int n = x.nextInt();
         int a=0,sum=0;
         while(n>0)
         {
            a=x.nextInt();
            sum+=(a*a);
            n--;
         }
         System.out.println(sum);
    }
}
         
         
         

              
              
          
      
           
       
          
     

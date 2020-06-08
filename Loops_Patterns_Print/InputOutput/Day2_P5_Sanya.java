import java.util.*;
public class Solution
{
     public static void main(String args[])
     {
         Scanner x=new Scanner(System.in);
        
         int n = x.nextInt();
         int a=0,sum=0,q=0;
        
         while(n>0)
         {
            a=x.nextInt();
            q=0;
            sum=0;
            while(a>0)
            {
                sum+=Math.pow(2,q)*(a%10);
                q=q+1;
                a=a/10;
                
            }
            System.out.println(sum);
            n=n-1;
         }
        
         
    }
}
         
         
         

              
              
          
      
           
       
          
     

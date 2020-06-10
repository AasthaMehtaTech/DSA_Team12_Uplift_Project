import java.util.*;
public class Solution
{
     public static void main(String args[])
     {
         Scanner x=new Scanner(System.in);
        
         int n = x.nextInt();
         int a=0;
         a=x.nextInt();
          int max=a,min=a,sum=a;
         while(n>1)
         {
            a=x.nextInt();
        
            if(a>=max)
            {
                max=a;
            }
            if(a<=min)
            {
                min=a;
            }
            sum=sum+a;
            n--;
         }
            System.out.println("Max = "+max);    
            System.out.println("Min = "+min);
            System.out.println("Sum = "+sum);    
         
    }
}
         
         
         

              
              
          
      
           
       
          
     

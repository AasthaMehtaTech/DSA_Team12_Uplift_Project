import java.util.*;
public class Solution
{
     public static void main(String args[])
     {
         Scanner x=new Scanner(System.in);
        
         int n = x.nextInt();
         int a=0,t=n,q=n;
         int sum=0;
         while(n>0)
         {
             n=n/10;
             a++;
         }
         while(t>0)
         {
             sum+=Math.pow(t%10,a);
             t=t/10;
         }
                
                 
             if(sum==q)   
             {
                  System.out.println("true");
             }
             else
             {
                  System.out.println("false");
             }
         
    }
}
         
         
         

              
              
          
      
           
       
          
     

              
              
          
      
           
       
          
     

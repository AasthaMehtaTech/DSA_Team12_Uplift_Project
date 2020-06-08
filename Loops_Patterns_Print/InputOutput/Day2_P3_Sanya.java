import java.util.*;
public class Solution
{
     public static void main(String args[])
     {
         Scanner x=new Scanner(System.in);
        
         int n = x.nextInt();
         int b=1;
         for(int i=1;i<=n;i++)//loop for new line
         {   b=1;
             for(int j=n;j>=i;j--)
             {
                 System.out.print(b+" ");
                 b++;
             }
            for(int k=2;k<(2*i)-1;k++)
            {
                System.out.print("* ");
            }
              
                
                 
                 
             
             
             
             System.out.println();
            
         }
         
        
         
    }
}
         
         
         

              
              
          
      
           
       
          
     

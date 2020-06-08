import java.util.*;
public class Solution
{
     public static void main(String args[])
     {
         Scanner x=new Scanner(System.in);
        
         int n = x.nextInt();
         for(int i=1;i<=n;i++)//loop for new line
         {   
             for(int k=n-i;k>0;k--)//loop for printing spaces
             {
                System.out.print(" "); 
             }
             for(int j=1;j<=i;j++)//loop for printing "*"
             {
                 System.out.print("* ");
             }
             
             System.out.println();
            
         }
         for(int i=1;i<n;i++)
         {
              for(int k=1;k<=i;k++)//loop for printing spaces
             {
                System.out.print(" "); 
             }
             for(int j=n;j>i;j--)//loop for printing "*"
             {
                 System.out.print("* ");
             }
             
             System.out.println();
         }
         
    }
}
         
         
         

              
              
          
      
           
       
          
     

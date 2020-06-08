import java.util.*;
public class Solution
{
     public static void main(String args[])
     {
         Scanner x=new Scanner(System.in);
        
         int n = x.nextInt();
         for(int i=1;i<=n;i++)//loop for new line
         {   
            
             for(int j=n;j>=i;j--)//loop for printing "*"
             {
                 System.out.print("* ");
             }
             System.out.println();
            
         }
         
    }
}
          
          
         
         

              
              
          
      
           
       
          
     

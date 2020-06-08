import java.util.*;
public class Solution
{
     public static void main(String args[])
     {
         Scanner x=new Scanner(System.in);
        
         int n = x.nextInt();
         int a=0,b=1,c=0;
         for(int i=1;i<=n;i++)//loop for new line
         {   
             
             
             for(int j=1;j<=i;j++)
             {
                 System.out.print(a+" " );
                 c=a+b;
                 a=b;
                 b=c;
                 
                 
             }
             
             System.out.println();
            
         }
        
         
    }
}
         
         
         

              
              
          
      
           
       
          
     

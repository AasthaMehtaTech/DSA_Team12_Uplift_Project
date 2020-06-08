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
             
             a=i;
             for(int j=1;j<2*n;j++)
             {   
                 if(i>=j || (i+j)>=2*n)
                 {
                     if((i>=j)&&(i+j)<2*n)
                     {
                         System.out.print(j+" ");
                     }
                     else
                     {
                         System.out.print(a+" ");
                         a--;
                     }
                     
                 }
                
                 else
                 System.out.print("  " );
                
                 
                 
             }
             
             
             System.out.println();
            
         }
         
        
         
    }
}
         
         
         

              
              
          
      
           
       
          
     

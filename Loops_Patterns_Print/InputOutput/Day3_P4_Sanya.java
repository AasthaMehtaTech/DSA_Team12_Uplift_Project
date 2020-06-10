import java.util.*;
import java.lang.Math; 
public class Solution
{
     public static void main(String args[])
     {
         Scanner x=new Scanner(System.in);
        
         int n = x.nextInt();
         int arr[]=new int[n];
         int a=0,m=0;
          for(int i=0;i<n;i++)
          {
              arr[i]=x.nextInt();
          }
          
           m=Math.abs(arr[0]-arr[1]);
           for(int i=1;i<n-1;i++)
          {
             a=Math.abs(arr[i]-arr[i+1]);
             if(a>=m)
             {
                 m=a;
             }
             
          }
          System.out.println(m);
        
    }
}
         
         
         

              
              
          
      
           
       
          
     

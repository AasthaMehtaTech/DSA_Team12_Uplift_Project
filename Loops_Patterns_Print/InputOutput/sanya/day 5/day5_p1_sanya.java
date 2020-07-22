/*package whatever //do not write package name here */

import java.util.*;
public class Solution{
    public static void main(String args[])
    {
        Scanner x=new Scanner(System.in);
        int n=x.nextInt();
        int sum=0;
        int arr[][]=new int[n][n];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                arr[i][j]=x.nextInt();
            }
        }
         int i=0;
         for(int j=0;j<n-1;j++)
            {
                
                sum=sum+arr[i][j];
            }
             for(int j=n-1;j>=0;j--)
             {
                  
                sum=sum+arr[n-1-j][j];
            }
              i=n-1;
         for(int j=1;j<n;j++)
            {
                 
                sum=sum+arr[i][j];
            }
            
            
        
        System.out.println(sum);
    }
}

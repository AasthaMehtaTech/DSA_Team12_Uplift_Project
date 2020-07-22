/*package whatever //do not write package name here */

import java.util.*;

public class Solution{
    public static void main(String args[])
    {
        Scanner x=new Scanner(System.in);
       int n=x.nextInt();
       int duplicate=0,d=0;
       int arr[]=new int[n];
       for(int i=0;i<n;i++)
       {
           arr[i]=x.nextInt();
           duplicate=duplicate^arr[i];
           if(duplicate==0)
           {
               d=arr[i];
           }
           
       }
        System.out.println(d);
        
        
       
    }
}

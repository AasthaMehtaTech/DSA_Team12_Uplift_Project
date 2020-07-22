/*package whatever //do not write package name here */

import java.util.*;

public class Solution{
    public static void main(String args[])
    {
        Scanner x=new Scanner(System.in);
        String s=x.nextLine();
        int n=0,sum=0,ele=0;
       
       ele=s.length();
       for(int i=0;i<ele;i++)
       {
           if(s.charAt(i)!=' ')
           {
               sum+=Character.getNumericValue(s.charAt(i));
               n=n+1;
           }
       }
        System.out.println((n*(n+1)/2)-sum);
        
        
       
    }
}

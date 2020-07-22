/*package whatever //do not write package name here */

import java.util.*;
public class Solution{
    public static void main(String args[])
    {
        Scanner x=new Scanner(System.in);
        int n=x.nextInt();
        int m=x.nextInt();
        int sum=0;
        int arr[][]=new int[n][m];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                arr[i][j]=x.nextInt();
            }
        }
         for(int i=m-1;i>=0;i--)
        {
            for(int j=0;j<n;j++)
            {
         
        System.out.print(arr[j][i]+" ");
            }
            System.out.println();
        }
    }
}

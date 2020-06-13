package sort012;

import java.util.*;
import java.lang.*;
import java.io.*;

class GFG {
public static void main (String[] args) {
	Scanner sc = new Scanner(System.in);
	//accept number of test cases
	int T = sc.nextInt();
	for(int i=0;i<T;i++)
	{   //accept value of n
	    int n = sc.nextInt();
	    int a[] = new int[n]; 
	    for(int j=0;j<n;j++)
	    {
	        a[j] = sc.nextInt();
	    }
	    sort(a,n);
	    for(int j=0;j<n;j++)
	    {   
	        System.out.print(a[j]+ " ");
	    }
	   System.out.println(); 
	}
	
	}
	static void sort(int a[], int n )
	{    int count1=0,count2=0,count3=0;
	     for(int i=0;i<n;i++)
	     {
	         switch(a[i])
	         {
	             case 0 : count1++;
	                     break;
	            case 1 : count2++;
	                    break;
	           case 2: count3++;
	                   break;
	         }
	     }
	     int k=0;
	     while(count1!=0)
	     {
	         a[k] = 0;
	         count1--;
	         k++;
	     }
	     while(count2!=0)
	     {
	         a[k] = 1;
	         count2--;
	         k++;
	     }
	     while(count3!=0)
	     {
	         a[k] = 2;
	         count3--;
	         k++;
	     }
	    
	     
	}
}
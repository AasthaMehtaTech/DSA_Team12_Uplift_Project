import java.util.*;
import java.lang.*;
import java.io.*;
//program to find missing number in an array
class GFG {
	public static void main (String[] args) 
	{
            
			Scanner sc = new Scanner(System.in);
		
		     int T =sc.nextInt(); //accept the test cases
	  
    	    for(int i=0;i<T;i++) 
        	{ 
        	    
		     //accept number of elements in the array
	    	 int n = sc.nextInt(); 
		     int a[] = new int[n];
	        for(int j=0;j<n-1;j++)
	         {
	             a[j] = sc.nextInt();
	         }
	          
	           findMissing(a,n);	 
	}
  
	   
	}
	 //function to find missing number
	 static void findMissing(int a[],int n)
	{
	       //to find sum of first n integers
	    int m = n+1;
	    int sum = (m*n)/2;
		for(int j=0;j<a.length-1;j++)
		{
		     
			  sum = sum - a[j];
		}
		 System.out.println(sum);
	}
}

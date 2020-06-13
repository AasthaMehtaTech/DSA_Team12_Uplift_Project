package countPairswithGivenSum;

import java.util.*;
import java.lang.*;
import java.io.*;


class GFG {
	public static void main (String[] args) {
		//accept test cases
		System.out.println("Enter value of test cases");
		Scanner sc = new Scanner(System.in);
		int T = sc.nextInt();
		 
		for(int i=0;i<T;i++)
		{
		    //accept size of the array
			System.out.println("Enter value of n");
		    int n = sc.nextInt();
		    int a[] = new int[n];
		    System.out.println("Enter sum");
		    int sum = sc.nextInt();
		    System.out.println("Ënter array elements");
		    for(int j=0;j<n;j++)
		    {
		        a[j] = sc.nextInt();
		    }
		   
		  pairSum(a,n,sum);   
		}
	}
	static void pairSum(int a[] , int n,int sum)
	{
		Arrays.sort(a);
	    int left = 0;
	    int right = n-1,count=0;
	    while(left<right)
	    { 
	    	 //System.out.println("left =" + a[left] + "right=" + a[right]  );
	    	// System.out.println(a[3]);
	    	int psum = a[left] + a[right];
	  //  System.out.println("current sum"+psum);
	        if(psum == sum)
	        {
	            System.out.println(a[left] + " " + a[right]);
	        }
	        if(psum< sum)
	        {
	            left++;
	        }
	        else
	        {
	            right--;
	        }
	    }
	    
	}
}
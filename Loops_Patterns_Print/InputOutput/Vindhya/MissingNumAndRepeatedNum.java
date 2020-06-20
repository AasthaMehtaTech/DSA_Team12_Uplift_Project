import java.util.*;
import java.lang.*;
import java.io.*;

class GFG {
	public static void main (String[] args)
	{
		int i,n,T,j;
		Scanner sc = new Scanner(System.in);
		T = sc.nextInt();
		for( i=0;i<T;i++)
		{
		    n = sc.nextInt();
		    int a[] = new int[n];
		    for( j=0;j<n;j++)
		    {
		        a[j] = sc.nextInt();
		    }
		    find(a,n);
		}
		
	}
 static	int rep ;
	static void find(int a[],int n)
	{
	    HashSet<Integer> seen = new HashSet<Integer>();
	    for(int ele : a )
	    {
	        if(seen.contains(ele))
	        {
	            rep = ele;
	           break;
	        }
	        else
	        {
	            seen.add(ele);
	        }
	    }
	    
	    int sum =((n) * (n+1))/2;
	    
	    for(int i = 0;i<n;i++)
	    {
	        if(a[i]!=rep)
	        {
	            sum = sum - a[i];
	        }
	    }
	    int missingNum = sum - rep;
	    System.out.println(rep + " "+missingNum);
	    
	}
}

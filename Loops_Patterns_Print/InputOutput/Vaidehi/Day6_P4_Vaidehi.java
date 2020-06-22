
import java.io.*;
import java.util.*;
class prg {
	public static void main (String[] args) {
	    Scanner sc=new Scanner(System.in);
	    int N=sc.nextInt();
	   int low=1;
	   int high=N/2+2;
	   int mid=0;
	   while(low<=high)
	{
	    mid=low+(high-low)/2;
	    if(mid*mid==N) break;
	    else if((mid*mid)<N)
	    {   
	        low=mid+1;
	        if(low*low>N) break;
	    }
	    else 
	    {high=mid-1;
	}
	}
	System.out.println(mid);
	}
}
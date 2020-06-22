
import java.io.*;
import java.util.*;
class prg {
	public static void main (String[] args) {
	    Scanner sc=new Scanner(System.in);
	    int N=sc.nextInt();
	    int arr[]=new int[N];
	    for(int i=0;i<N;i++)
	    arr[i]=sc.nextInt();
	    int k=sc.nextInt();
	    int low=0;
	    int high=N-1;
	    int mid=0;
	        while(low<high)
	        { mid=low+(high-low)/2;
	          if(arr[mid-1]>arr[mid]&&arr[mid+1]>arr[mid])
	          {
	              break;
	          }
	          else if(arr[mid]<arr[N-1])
	          high=mid-1;
	          else
	          low=mid+1;
	        }
	        if(k>=arr[mid]&&k<=arr[N-1])
	        {
	           low=mid;
	           high=N-1;
	           while(low<=high)
	           {
	               mid=low+(high-low)/2;
	               if(arr[mid]==k)
	               {
	                   break;
	               }
	               else if(arr[mid]<k)
	               low=mid+1;
	               else
	               high=mid-1;
	           }
	        }
	        else
	        {
	            low=0;
	            high=mid-1;
	            while(low<=high)
	            {
	                mid=low+(high-low)/2;
	                if(arr[mid]==k)
	                {
	                    break;
	                }
	               else if(arr[mid]<k)
	               low=mid+1;
	               else
	               high=mid-1;
	            }
	        }
	    System.out.println(mid);
	}
}
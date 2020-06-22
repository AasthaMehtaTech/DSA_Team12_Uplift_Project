
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
	    Arrays.sort(arr);
	    int low=0;
	    int high=0;
	    int mid=0;
	    int count=0;
	    for(int i=0;i<N;i++)
	    {
	        low=i+1;
	        high=N-1;
	        while(low<=high)
	        { mid=low+(high-low)/2;
	          if(arr[mid]-arr[i]==k)
	          {
	              count++;
	              low=mid+1;
	          }
	          else if(arr[mid]-arr[i]>k)
	          {
	              high=mid-1;
	          }
	          else
	          low=mid+1;
	        }
	    }
	    System.out.println(count);
	}
}
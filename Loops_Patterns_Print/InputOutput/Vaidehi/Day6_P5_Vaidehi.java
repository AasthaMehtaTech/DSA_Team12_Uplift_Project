
import java.io.*;
import java.util.*;
class prg {
	public static void main (String[] args) {
	    Scanner sc=new Scanner(System.in);
	    int N=sc.nextInt();
	    int M=sc.nextInt();
	    int arr[]=new int[M*N];
	    int ind=0;
	    for(int i=0;i<(M*N);i++)
	    arr[i]=sc.nextInt();
	    int K=sc.nextInt();
	    int p=-1;
	    for(int i=0;i<(M*N);i=i+N)
	    {
	        if(K>=arr[i]&&K<=arr[p+N])
	        {
	            ind=i;
	            break;
	        }
	        else p=p+N;
	    }
	    int flag=0;
	    for(int i=ind;i<(ind+N);i++)
	    {
	        if(arr[i]==K)
	        {
	            flag=1;
	            break;
	        }
	    }
	    System.out.println(flag);
	}
}
import java.io.*;
import java.util.*;
class prg
{
    public static void main(String args[])throws IOException
    {   Scanner sc=new Scanner(System.in);
        int N=sc.nextInt();
        int arr[]=new int[N];
        for(int i=0;i<N;i++)
        arr[i]=sc.nextInt();
        int diff=0;
        int max=-1;
        for(int i=1;i<N;i++)
        {
            diff=Math.abs(arr[i-1]-arr[i]);
            if(diff>max) max=diff;
        }
        System.out.println(max);
    }
}
import java.io.*;
import java.util.*;
class prg
{
    public static void main(String args[])throws IOException
    {
        Scanner sc=new Scanner(System.in);
        int N=sc.nextInt();
        long sum=N*(N+1)/2;
        int arr[]=new int[N-1];
        for(int i=0;i<N-1;i++)
        arr[i]=sc.nextInt();
        long sum1=0;
        for(int i:arr)
        sum1+=i;
        System.out.println(sum-sum1);
    }
}
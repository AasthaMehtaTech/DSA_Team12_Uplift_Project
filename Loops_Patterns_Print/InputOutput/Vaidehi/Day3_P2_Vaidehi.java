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
        long sum=0;
        for(int i=0;i<N;i++)
        {
            sum+=(arr[i]*arr[i]);
        }
        System.out.println(sum);
    }
}
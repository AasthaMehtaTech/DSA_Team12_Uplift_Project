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
        int min=Integer.MAX_VALUE;
        int max=Integer.MIN_VALUE;
        for(int i=0;i<N;i++)
        {
            sum+=arr[i];
            if(arr[i]<min) min=arr[i];
            if(arr[i]>max) max=arr[i];
        }
        System.out.println("Max= "+max);
        System.out.println("Min= "+min);
        System.out.println("Sum= "+sum);
    }
}
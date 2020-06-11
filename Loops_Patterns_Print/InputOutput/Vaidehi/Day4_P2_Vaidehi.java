import java.io.*;
import java.util.*;
class prg
{
    public static void main(String args[])throws IOException
    {
        Scanner sc=new Scanner(System.in);
        int N=sc.nextInt();
        int arr[]=new int[N];
        for(int i=0;i<N;i++)
        arr[i]=sc.nextInt();
        int max=arr[0];
        int maxtn=arr[0];
        for(int i:arr)
        {
            maxtn+=i;
            if(maxtn>max)
            max=maxtn;
            if(maxtn<0)
            maxtn=0;
        }
        System.out.println(max);
    }
}
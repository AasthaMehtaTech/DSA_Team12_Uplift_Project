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
        int K=sc.nextInt();
        Arrays.sort(arr);
        System.out.println(arr[K-1]);
    }
}
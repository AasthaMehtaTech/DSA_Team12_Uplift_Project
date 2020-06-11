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
        int aux[]=new int[N];
        aux[0]=arr[0];
        for(int i=1;i<N;i++)
        {
            aux[i]=arr[i]+aux[i-1];
        }
        for(int i:aux)
        System.out.print(i+" ");
        System.out.println();
    }
}
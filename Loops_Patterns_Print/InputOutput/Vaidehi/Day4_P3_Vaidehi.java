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
        int aux[]=new int[3];
        for(int i=0;i<N;i++)
        {
            if(arr[i]==0) aux[0]++;
            else if(arr[i]==1) aux[1]++;
            else aux[2]++;
        }
        int j=0;
        for(int i=0;i<aux[0];i++)
        {
            arr[j]=0;
            j++;
        }
        for(int i=0;i<aux[1];i++)
        {
            arr[j]=1;
            j++;
        }
        for(int i=0;i<aux[2];i++)
        {
            arr[j]=2;
            j++;
        }
        for(int i=0;i<N;i++)
        {
            System.out.print(arr[i]+" ");
        }
    }
}
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
        int targ=sc.nextInt();
        Arrays.sort(arr);
        int i=0;
        int j=N-1;
        while(i<j)
        {
            if(arr[i]+arr[j]==targ)
            System.out.println(arr[i]+"and"+arr[j]);
            if(arr[i]+arr[j]<targ)
            i++;
            else j--;
        }
    }
}
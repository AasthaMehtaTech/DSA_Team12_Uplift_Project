import java.io.*;
import java.util.*;
class prg
{
    public static void main(String args[])throws IOException
    {
        Scanner sc=new Scanner(System.in);
        int N=sc.nextInt();
        int arr[][]=new int[N][N];
        int sum=0;
        for(int i=0;i<N;i++)
        {
            for(int j=0;j<N;j++)
            {
                arr[i][j]=sc.nextInt();
                if(i==0||i==N-1)
                sum+=arr[i][j];
                else if(i+j==N-1)
                sum+=arr[i][j];
            }
        }
        System.out.println(sum);
    }
}
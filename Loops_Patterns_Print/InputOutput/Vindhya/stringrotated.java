import java.util.*;
import java.lang.*;
import java.io.*;

class GFG
{
    static int check(String a,String b)
    {
        if(a.length()!=b.length())
        {
            System.out.println(0);
        }
        String b1 = b.substring(b.length()-2,b.length());
        String b2 = b.substring(0,b.length()-2);
        String b3 = b1 + b2;
        if(b3.equals(a))
        {
            
            return 1;
        }
        b1 = b.substring(2,b.length());
        b2 = b.substring(0,2);
        b3 = b1+b2;
        if(b3.equals(a))
        {
            return 1;
            
        }
        return 0;
        
    }
	public static void main (String[] args) 
	{ 
	    Scanner sc = new Scanner(System.in);
		int tc = sc.nextInt();
		for(int i=0;i<tc;i++)
		{
		   
		  String a = sc.next();
		  String b = sc.next();
		int res =   check(a,b);
		System.out.println(res);
		}
	}
}

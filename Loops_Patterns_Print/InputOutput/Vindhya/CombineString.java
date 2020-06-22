import java.util.Scanner;

public class Combine {

	public static void main(String[] args)
	{
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter the string");
		String s1 = sc.next();
		String s2 = sc.next();
		StringBuffer s = new  StringBuffer();
		int i;
		for(i=0;i < s1.length() || i < s2.length();i++)
		{
			if(i<s1.length())
			{
			s.append(s1.charAt(i));
			}
			if(i<s2.length())
			{
				s.append(s2.charAt(i));
			}
			
		}
		System.out.println(s);
	}

}

/*
 * usually string is mutable but string buffer class provides mutability feature
 * String buffers are safe for use by multithreads.
 * thread safe 
 * 	String builder will also have all string methods
 * it is not thread safe
 * it will not provide synchronization
 * String buffer are more useful
 */

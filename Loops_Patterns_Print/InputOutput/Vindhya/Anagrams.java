import java.util.Arrays;
import java.util.Scanner;

public class Anagrams {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter the Strings");
		String s1 = sc.nextLine();
		String s2 = sc.nextLine();
		s1.replace(" ", "");
		s2.replace(" ", "");
		s1 = s1.toLowerCase();
		s2 = s2.toLowerCase();
		char x[] = s1.toCharArray();
		char y[] =  s2.toCharArray();
		Arrays.sort(x);
		Arrays.sort(y);
	Boolean result = 	Arrays.equals(x, y);
		if(result==true)
		{
			System.out.println("Strings are Anagrams");
		}
		else
		{
			System.out.println("Strings are not Anagrams");
		}
		
	}

}
/*
 * Anagram is a word or phrase formed by rearranging the letters of a different word or phrase 
 * To check two strings are anagrams
 * ->Sort the String 
 * ->compare sorted data 
 * ->After sorting if two strings are equal then they are anagrams
 * 
 */

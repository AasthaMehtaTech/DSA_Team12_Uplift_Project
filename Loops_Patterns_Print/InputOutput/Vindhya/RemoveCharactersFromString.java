import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;

public class Remove {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter the Strings");
		String s1 = sc.next();
		String s2 = sc.next();
		removeele(s1,s2);
	}
  static void removeele(String s1,String s2)
  {
	  HashMap<Character,Integer> map = new HashMap<>();
	  int size = s2.length();
	  char y [] = s2.toCharArray();
	 int i=0;
	 while(i!=size)
	 {
		if(map.get(y[i])==null)
		{
			map.put(y[i],1);
		}
		else
		{
			int oldval = map.get(y[i]);
			int newval = oldval + 1;
			map.put(y[i], newval);
		}
		i++;
	 }
	 int j=0;
	 char currKey;
	 int size2 = s1.length();
	 char x[] = s1.toCharArray();
	 String res = "";
	 while(j!=size2)
	 {
		 if(!map.containsKey(x[j]))
		 {
			 res = res + x[j];
		 }
		 j++;
	 }
	 System.out.println(res);
  }
}

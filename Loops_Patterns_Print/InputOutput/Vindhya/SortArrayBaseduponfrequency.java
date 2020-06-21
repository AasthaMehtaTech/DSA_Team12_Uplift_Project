import java.util.Arrays;
import java.util.Collections;
import java.util.HashMap;
import java.util.List;

public class Sort
{
   
	
	public static void main(String args[])
	{
		Integer a[] = {10,7,10,11,10,7,6,5};
		List<Integer> list = Arrays.asList(a);
		System.out.println(sort(list));
	}
	static List<Integer> sort(List<Integer>list)
	{
		HashMap <Integer,Integer> map = new HashMap<Integer,Integer>();
		for(int i=0;i<list.size();i++)
		{
			map.put(list.get(i),map.getOrDefault(list.get(i),0)+1);
		}
		//to compare two elements of the list
		Collections.sort(list,(n1,n2)->
		{
			//so get the frequency first 
			int freq1 = map.get(n1);
			int freq2 = map.get(n2);
			if(freq1!=freq2)
			{
				return freq2 - freq1;
			}
			//if the frequency is same then it will be sorted based upon indexes
			return list.indexOf(n2) - list.indexOf(n1);
		});
		return list;
	}
}
 /* We can use map to store the frequency
  * 
  *  
  *  
  */

/*
->inside list we can insert duplicates
->insertion order is maintained or preserved
->it is more flexible we can print all the elements in the ArrayList only 
by passing their name
->with in array we have to know exact size but array list is a dynamic array
->We can see in YouTube for subscription they use ArrayList
->ArrayList will have add , remove , clear bultin methods

*/

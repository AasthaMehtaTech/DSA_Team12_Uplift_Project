/* using hash map*/
import java.util.HashMap;

public class Diff {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int arr[] = {1, 5, 3, 4, 2,3}; 
		int n = arr.length; 
		int k = 3; 
		
		findPairs(arr, k); 
	}
  

static void findPairs(int[] nums, int k) {
	//check the the given difference is negative
    if(k < 0)
    {
    	System.out.println("No pairs");
    }
     //to keep track of the pairs who will give given difference 
    int pairs = 0;
    HashMap<Integer, Integer> map = new HashMap<>();
   //for each loop to traverse the array
    for(int n: nums)
    {
    	//getOrDefault method will give the value of passed key passed into it 
    	//if that key is not present then it will return default value in our case 0 
        int count = map.getOrDefault(n, 0);
       
        map.put(n, count + 1);
       // this is to check that the the difference is not negative and only once that element is present 
        if(k != 0 && count == 0) {
            // if k != 0 and this is the first time meeting this number, check n - k and n + k
            if(map.containsKey(n - k)) {
                pairs++;
              //  System.out.println("pair value first time:"+pairs);
            }

            if(map.containsKey(n + k)) {
                pairs++;
               // System.out.println("pair value second time:"+pairs);
            }
        } else if(k == 0 && count == 1) {
            // if k == 0, only when we have met the number twice do we count it as a pair
            pairs++;
            //System.out.println("pair value third time:"+pairs);
        }
    }

    System.out.println("Pairs:"+pairs);
}
}
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------
/* another approach using two pointer concept 
but it fails when difference is zero */
import java.util.Arrays;

public class GFG 
{
	static int countPairsWithDiffK(int arr[], int n, int k) 
	{ 
		int count = 0; 
		Arrays.sort(arr); // Sort array elements 

		int l = 0; 
		int r = 0; 
		while(r < n) 
		{ 
			if(arr[r] - arr[l] == k) 
			{ 
				count++; 
				l++; 
				r++; 
			} 
			else if(arr[r] - arr[l] > k) 
				l++; 
			else // arr[r] - arr[l] < sum 
				r++; 
		}  
		return count; 
} 

//Driver program to test above function 
public static void main(String[] args) 
{ 
int arr[] = {1, 5, 3, 4, 2}; 
int n = arr.length; 
int k = 3; 
System.out.println("Count of pairs with given diff is " + 
countPairsWithDiffK(arr, n, k)); 
} 

}


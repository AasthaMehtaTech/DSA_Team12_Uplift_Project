class Solution 
{
    public String frequencySort(String s) 
    {
         HashMap<Character,Integer> map = new HashMap<>();
        for(char c : s.toCharArray())
        {
            map.put(c,map.getOrDefault(c,0)+1);
            
            
        }
        PriorityQueue<Character> maxHeap = new PriorityQueue<>((a,b)->map.get(b) - map.get(a));
        maxHeap.addAll(map.keySet());
        StringBuilder result = new StringBuilder();
        while(!maxHeap.isEmpty())
        {
        	char current = maxHeap.remove();
        	for(int i=0;i<map.get(current);i++)
        	{
        		result.append(current);
        	}
        	
        }
        return result.toString();
        
        
        
    }
}
/*
in java for heap we can use priority queue
So using priority queue we can easily implement heap
Priority queues makes sorting easier
*/
/*
1.build frequency map
2.build priority queue
3.add frequency map to priority queue
4.fill the map from priority queue to our output list and return it
*/
/*
Another way to iterate through string
for(int i=0;i<s.length();i++)
{
    map.put(s.charAt(i),);
}

*/

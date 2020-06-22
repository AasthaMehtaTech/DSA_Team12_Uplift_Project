public class Solution {
    // DO NOT MODIFY THE LIST. IT IS READ ONLY
    public ArrayList<Integer> repeatedNumber(final List<Integer> A) {
        int freq[]=new int[A.size()+1];
        ArrayList <Integer> arr=new ArrayList();
        for(int i=0;i<A.size();i++)
        freq[A.get(i)]++;
        for(int i=0;i<freq.length;i++)
        if(freq[i]>1) 
        {
            arr.add(i);
            break;
        }
        for(int i=1;i<freq.length;i++)
        if(freq[i]==0)
        {
            arr.add(i);
            break;
        }
        return arr;
    }
}

//one way of doing it using hash set
/*
->We used hash set beause it will not allow any duplicate elements

*/
class Solution {
    public int findDuplicate(int[] nums) {
        
        Set <Integer> seen = new HashSet<Integer>();
        for(int num:nums)
        {
            if(seen.contains(num))
            {
                return num;
            }
            else
            {
                seen.add(num);
            }
        }
        return -1;
    }
}
/* Another solution with o(nlogn) time complexity*/
class Solution {
    public int findDuplicate(int[] nums) {
      Arrays.sort(nums);
        for(int i=1;i<nums.length;i++)
        {
            if(nums[i]-nums[i-1]==0)
            {
                return nums[i];
            }
        }
      return -1;
    }
}

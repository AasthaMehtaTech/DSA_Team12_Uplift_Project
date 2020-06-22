class Solution {
    public int findDuplicate(int[] nums) {
        int len=nums.length;
        int arr[]=new int[len+1];
        for(int i=0;i<len;i++)
        {
            arr[nums[i]]++;
        }
        for(int i=0;i<len+1;i++)
            if(arr[i]>1) return i;
        return 0;
    }
}
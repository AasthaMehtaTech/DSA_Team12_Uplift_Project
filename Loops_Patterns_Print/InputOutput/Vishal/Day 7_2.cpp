class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int i;
        sort(nums.begin(), nums.end());
        for(i=0;i<nums.size();i++)
        {
            if(nums[i]==nums[i+1])
                break;
        }
        return nums[i];
    }
};
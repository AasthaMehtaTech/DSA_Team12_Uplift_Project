class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int dup=0;
        for(auto i:nums)
        {
            if(nums[abs(i)-1]<0)
            {
                dup=abs(i);
                break;
            }
            else
            {
                nums[abs(i)-1]=-nums[abs(i)-1];
            }
        }
        return dup;
    }
};

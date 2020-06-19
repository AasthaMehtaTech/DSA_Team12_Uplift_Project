class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int len=nums.size();
        sort(nums.begin(),nums.end());
        int i;
        for(i=0;i<len-1;i++){
            if(nums[i]==nums[i+1]){
                break;
            }
        }
        return(nums[i]);
    }
};

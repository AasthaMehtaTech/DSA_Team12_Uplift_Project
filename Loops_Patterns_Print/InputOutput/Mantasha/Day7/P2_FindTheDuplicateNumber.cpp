class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int length=nums.size();
        sort(nums.begin(),nums.end());
        int i;
        for(i=0;i<length-1;i++){
            if(nums[i]==nums[i+1]){
                break;
            }
        }
        return(nums[i]);
  }
};

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
    int length = nums.size();
        int i;
        sort(nums.begin(),nums.end());
        for(i=0;i<length-1;i++){

            if(nums[i] == nums[i+1]){
               break;
            }
        }
        return nums[i];
        }
};

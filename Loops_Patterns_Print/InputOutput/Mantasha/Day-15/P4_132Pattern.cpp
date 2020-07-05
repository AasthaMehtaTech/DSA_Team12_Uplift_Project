class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        
        int a_k = INT_MIN;
        stack<int> stk;
        
        for(int i = nums.size()-1; i >= 0; i--) {
            while(!stk.empty() && stk.top() < nums[i]) {
                a_k = max(a_k,stk.top());
                stk.pop();
            }
            
            if(a_k != INT_MIN && a_k > nums[i]) return true;
            
            stk.push(nums[i]);
        }
    
        return false;
    }
};

class Solution {
public:
    // time: O(n) and space: O(n)
    int subarraySum(vector<int>& nums, int k) {
        std::unordered_multiset<int> cum_sum; // O(n) space
        cum_sum.insert(0); // initial sum;
        int prev_sum = 0;
        int total_sum = 0;
    	for (int i = 0; i < nums.size(); i++) // O(n) time
    	{
            prev_sum += nums[i];
            total_sum += cum_sum.count(prev_sum - k);
            cum_sum.insert(prev_sum);
    	}
        return total_sum;
    }
};

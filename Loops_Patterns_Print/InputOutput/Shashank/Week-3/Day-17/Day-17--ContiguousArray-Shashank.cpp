class Solution {
public:
	int findMaxLength(vector<int>& nums) {
  unordered_map<int,int> Map; 
		Map[0]=-1;
		int count=0;
		int ans=0;
		for(int i=0;i<nums.size();i++)
		{
			if(nums[i]==1)
			{
				count++;
			}
			else
			{
				count--;
			}
			if(Map.count(count))
			{
				ans=max(ans,i-Map[count]);
			}
			else
			{
				Map[count]=i;
			}
		}

		return ans;
	}
};

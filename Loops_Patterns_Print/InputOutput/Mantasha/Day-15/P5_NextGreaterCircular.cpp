class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n=nums.size();
        vector<int> nge(n,-1);
        vector<int> ans(n,-1);

        stack<int> process;
        for(int i=0;i<n;i++)
        {
            while(!process.empty() && nums[process.top()]<nums[i])
            {
                nge[process.top()]=i;
                ans[process.top()]=nums[i];
                process.pop();
            }
            process.push(i);
        }
        
        int cur=0,next=0;
        while(!process.empty())
        {
            cur=process.top();
            next=(cur+1)%n;
            while(next!=-1 && next!=cur && nums[next]<=nums[cur])
            {
                next=nge[next];
            }
            if(next!=cur && next!=-1) 
            {
                ans[cur]=nums[next];
                nge[cur]=next;
            }
            process.pop();
        }
        
        return ans;
    }
};

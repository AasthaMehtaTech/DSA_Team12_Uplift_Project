class Solution {
public:
    int findLHS(vector<int>& nums) {
        unordered_map<int, int> m;
        for(const int n: nums) ++m[n];
        int max_{0};
        for(const auto& [k, v]: m) {
            auto it = m.find(k+1);
            if(it != m.end()) max_ = max(max_, v+it->second);
        }
        return max_;
    }
};

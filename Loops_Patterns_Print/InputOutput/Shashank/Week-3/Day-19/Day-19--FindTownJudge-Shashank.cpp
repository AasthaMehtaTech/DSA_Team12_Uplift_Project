class Solution {
public:
    int findJudge(int N, vector<vector<int>>& trust) {
        vector<vector<int>> adL(N+1);
        vector<int> res(N+1);
        for(int i = 0;i < trust.size(); i++) {
            int src = trust[i][0];
            int dst = trust[i][1];
            adL[src].push_back(dst);
            res[dst]++;
        }
        for(int i = 1;i < adL.size(); i++) {
            if(res[i] == N-1 && adL[i].size() == 0) {
                return i;
            }
        }
        return -1;
    }
};

class Solution {
public:
    vector<string> restoreIpAddresses(string s) {
        vector<string> result;
        string tmp = "";
        dfs(0,0,result,s,tmp);
        return result;
        
    }
    
    void dfs(int start, int step, vector<string> &result, string &s, string tmpResult) {
        if (s.size() - start > 12 - 3 * step) {
            return ;
        }
        if (step == 4 && start == s.size()) {
            tmpResult.pop_back();
            result.push_back(tmpResult);
            return;
        } 
        int num = 0;
        for (int i = 1; i <= 3; i++) {
            if (start + i <= s.size()) {
                string tmp = s.substr(start,i);
                num = stoi(tmp);
                if (num == 0 && tmp.size() == 1 || num < 256 && tmp[0] != '0')
                    dfs(start + i,step + 1, result, s, tmpResult+tmp + ".");
            }
        }
    }
    
};

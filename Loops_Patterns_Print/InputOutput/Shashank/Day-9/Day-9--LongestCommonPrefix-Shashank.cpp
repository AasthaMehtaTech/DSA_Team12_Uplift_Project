class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty()) return "";
        string ans = strs[0];
        for(int i = 1;i<strs.size() && ans!="";i++){
            if(strs[i].length()<ans.length()) ans.erase(strs[i].length());
            for(int j = 0;j<strs[i].length() && j<ans.length();j++)
                if(ans[j]!=strs[i][j]) ans.erase(j);
        }
        return ans;
    }
};

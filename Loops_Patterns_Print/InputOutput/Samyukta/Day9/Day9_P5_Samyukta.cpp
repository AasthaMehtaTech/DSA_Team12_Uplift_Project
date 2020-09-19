class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty())
        {
            return "";
        }
        string prefix=strs[0];
        int i,j;
        for(i=1;i<strs.size();i++)
        {
            if(strs[i].length()<prefix.length())
            {
                prefix.erase(strs[i].length());
            }
            for(j=0;j<prefix.length()&&strs[i].length();j++)
            {
                if(prefix[j]!=strs[i][j])
                {
                    prefix.erase(j);
                }
            }
        }
        return prefix;
    }
};

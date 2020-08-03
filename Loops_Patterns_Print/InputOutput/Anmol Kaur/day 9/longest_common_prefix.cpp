// Write a function to find the longest common prefix string amongst an array of strings.
// If there is no common prefix, return an empty string ""

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty()) return "";

    // finding longest common prefix using sort function

     int n = ar.size();

        if (ar.size() == 1)
        return ar[0];

    // Sort the given array
    sort(ar.begin(), ar.end());

    // Find the minimum length from
    // first and last string
    int en = min(ar[0].size(),
                 ar[n - 1].size());

    // Now the common prefix in first and
    // last string is the longest common prefix
    string first = ar[0], last = ar[n - 1];
    int i = 0;
    while (i < en && first[i] == last[i])
        i++;

    string pre = first.substr(0, i);
    return pre;

       /* string ans = strs[0];
        for(int i = 1;i<strs.size() && ans!="";i++){
            if(strs[i].length()<ans.length()) ans.erase(strs[i].length());
            for(int j = 0;j<strs[i].length() && j<ans.length();j++)
                if(ans[j]!=strs[i][j]) ans.erase(j);
        }
        return ans;
    */
    }
};

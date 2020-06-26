class Solution {
public:
  int lengthOfLongestSubstring(string s) {
    map<char, int> m;
    int ans = 0, pos = -1;
    for(int i = 0; i < s.size(); i++){
      char x = s[i];
      if (m.find(x) != m.end() && pos < m[x]) {
        pos = m[x];
      }
      ans = max(i-pos, ans);
      m[x] = i;
    }
    return ans;
  }
};

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
	int cnt[256];
	memset(cnt,-1,sizeof(cnt));
	int i=-1, res = 0;
	for(int j=0; j<s.size(); j++){ 
		if(cnt[s[j]]>i)
			i=cnt[s[j]];
		cnt[s[j]]=j;
		res=max(res, j-i);
	}
	return res;
        
    }
};

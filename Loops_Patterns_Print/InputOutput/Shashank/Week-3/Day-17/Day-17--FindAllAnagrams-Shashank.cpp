class Solution {
public:
    bool check(vector<int> &x,vector<int> &y){
        for(int i=0;i<26;i++)
            if(x[i]!=y[i])
                return false;
        return true;
    }
    Solution(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    }
    vector<int> findAnagrams(string s, string p) {
        vector<int> ans;
        if(s.length()<p.length())
            return ans;
        vector<int> ma(26,0);
        for(int i=0;i<p.length();i++)
            ma[p[i]-'a']++;
        int k=p.length();
        int n=s.length();
        int a=0;
        vector<int> map(26,0);
        for(int i=0;i<k;i++)
            map[s[i]-'a']++;
        if(check(ma,map))
            ans.push_back(a);
        
        while(a+k<n){
            map[s[a]-'a']--;
            a++;
            map[s[a+k-1]-'a']++;
            if(check(ma,map))
                ans.push_back(a);
            
        }
        return ans;
    }
};

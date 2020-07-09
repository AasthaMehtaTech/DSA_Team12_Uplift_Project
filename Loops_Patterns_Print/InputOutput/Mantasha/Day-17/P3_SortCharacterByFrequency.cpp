class Solution {
public:
    Solution(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
    static bool compare(pair<char,int>& a,pair<char,int>& b){
        return (a.second > b.second);
    }
    string frequencySort(string s) {
        unordered_map<char,int> m;
        for(char c:s)
            m[c]++;
        vector<pair<char,int>> p;
        for(auto it:m){
            pair<char,int> temp;
            temp.first=it.first;
            temp.second=it.second;
            p.push_back(temp);
        }
        sort(p.begin() , p.end() , compare);
        string ans="";
        for(auto it:p){
            int num=it.second;
            char q=it.first;
            while(num--){
                ans+=q;
            }
        }
        return ans;
    };
};

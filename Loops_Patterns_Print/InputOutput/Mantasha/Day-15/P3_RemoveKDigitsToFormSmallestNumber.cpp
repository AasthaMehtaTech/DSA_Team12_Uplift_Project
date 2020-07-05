class Solution {
public:
    string removeKdigits(string num, int k) {
        int N = num.length();
        if(N == 0 || N < k) return "0";
        vector<char> vec;
        
  
        for(int i=0; i<N; i++) {
            while(vec.size() && k && vec.back() > num[i]) {
                vec.pop_back(); 
                k--;
            }
            vec.push_back(num[i]);
        }
        
        while(vec.size() && k) {
            vec.pop_back();
            k--;
        }
        
        int index = 0; 
        while(index < vec.size() && vec[index]-'0' == 0) {
            index++;
        }
        
        string ans = "";
        for(int i=index; i<vec.size(); i++) {
            ans += vec[i];
        }
        
        return ans == "" ? "0" : ans;
    }
};

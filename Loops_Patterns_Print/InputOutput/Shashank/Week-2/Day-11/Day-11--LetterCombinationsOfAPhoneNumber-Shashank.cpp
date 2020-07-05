class Solution {
public:
    vector<string> letterCombinations(string digits) {
        if(digits.empty()) return {};
        int size = 1;
        vector<string> v = {"abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        
        for(char c : digits)
            size *= v[c-'2'].size();

        vector<string> res( size );
        vector<string> raw( digits.size() );
        int i = 0;
        int n = size;
        for(char c : digits)
        {
            string& cur = v[c-'2'];
            
            int k = cur.size();
            n /= k;
            
            int tmp = 0;
            for( int j = 0; j < size; j += n )
            {
                raw[i].append( n, cur[tmp%k] );
                ++tmp;
            }
             
            ++i;
        }
        
        for(i = 0; i < res.size(); ++i)
        {
            for(n = 0; n < raw.size(); ++n)
            {
                res[i].append(1, raw[n][i]);
            }
        }
        
        return res;
    }
};
© 2020 GitHub, Inc.

class Solution {
public:
    string reverseWords(string s) {
        reverse(s.begin(), s.end());
        int start = 0, i = 0, j = 0;
        while(j < s.size()) {
            if(s[i] == ' ') {i++; j++; continue;}
            if(s[j] == ' ') {
                reverse(s.begin()+i, s.begin()+j);
                while(i < j) {
                    s[start] = s[i];
                    start++; i++;
                }
                s[start] = ' ';
                start++;
            }
            else j++;
        }
        if( i < s.size() ) {
            reverse(s.begin()+i, s.end());
            while(i < s.size() and s[i] != ' ') {
                s[start] = s[i];
                start++; i++;
            }         
            s[start] = ' ';
            start++;
        }
        start = start == 0 ? start : start-1;
        if(start < s.size()) s.erase(start, s.size()-start+1);
        return s; 
    }
};

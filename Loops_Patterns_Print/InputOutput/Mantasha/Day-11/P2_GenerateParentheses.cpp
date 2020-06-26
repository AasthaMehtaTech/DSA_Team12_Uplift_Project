class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> res;
        backtrace(res, "", 0, 0, n);
        return res;
    }
    
private:
    void backtrace(vector<string>& res, string str, int start, int end, int max) {
        if(str.length() == max * 2) {
            res.push_back(str);
            return;
        }
        if(start < max) { // open parenthesis num is less than max
            backtrace(res, str+"(", start+1, end, max);
        }
        if(end < start) {// close parenthesis num is less than open num
            backtrace(res, str+")", start, end+1, max);
        }
    }
    

};

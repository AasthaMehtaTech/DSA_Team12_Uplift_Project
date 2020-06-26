class Solution {
public:
    Solution(){
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
    }
    vector<int> charCount; 
    vector<int> ascii;
    int totalCount = 0, c_count = 0; 
    bool checkCount(char alpha){
        int index = ascii[alpha-'a'];
        int count = ++charCount[index];
        if(index == 0){ 
            c_count++;
        }
        else if(charCount[index-1] < count){ 
            return false; 
        }
        else if(index == 4){
            totalCount = max(totalCount, c_count); 
            c_count--;
        }
        return true;
    }
    
    int minNumberOfFrogs(string croakOfFrogs) {
        if(croakOfFrogs.back() != 'k'){return -1;}
        charCount.resize(5, 0);
        ascii.resize(26, 0);
        ascii['c'-'a'] = 0;
        ascii['r'-'a'] = 1;
        ascii['o'-'a'] = 2;
        ascii['a'-'a'] = 3;
        ascii['k'-'a'] = 4;
        for(auto c: croakOfFrogs){
            if(!checkCount(c)){ 
                return -1;
            }
        }
        return totalCount;
    }
};

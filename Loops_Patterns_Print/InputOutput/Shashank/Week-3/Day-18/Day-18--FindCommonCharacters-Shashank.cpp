class Solution {
public:
    vector<string> commonChars(vector<string>& A) {
        int map[A.size()+1][26];
        int len = A.size();
        for(int i=0;i<len;i++){
            for(int j=0;j<26;j++){
                map[i][j]=0;   
            }
        }
        for(int i=0;i<len;i++){
            for(int j=0;j<A[i].length();j++){
                map[i][A[i][j]-'a']+=1;
            }
        }
        vector<string> ans;
        for(int j=0;j<26;j++){       
            int f=1;
            int minfreq=INT_MAX;
            for(int i=0;i<len;i++){
                if(map[i][j]==0){
                    f=0;   
                    break;
                }else{
                    minfreq=min(minfreq, map[i][j]);
                }
            }
            if(f==1){
                int c = minfreq;
                while(c--){
                    string s;
                    s.push_back(j+'a');
                    ans.push_back(s);
                }
            }
        }
        return ans;
    }
};

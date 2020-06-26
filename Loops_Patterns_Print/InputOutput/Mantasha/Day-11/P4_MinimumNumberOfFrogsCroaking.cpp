class Solution {
public:
    int minNumberOfFrogs(string s) {
        // c-- r-- o-- a-- k
        int dp[5]={0};
        int ret=0;
        int op=0;
        for(auto c: s){
            if(c=='c'){
                op++;
                dp[0]++;
            }else if(c=='r'){
                if(dp[1]>=dp[0]) return -1;
                dp[1]++;
            }else if(c=='o'){
                if(dp[2]>=dp[1]) return -1;
                dp[2]++;
            }else if(c=='a'){
                if(dp[3]>=dp[2]) return -1;
                dp[3]++;
            }else if(c=='k'){
                if(dp[4]>=dp[3]) return -1;
                dp[4]++;
                op--;
            }else return -1;
            ret=max(ret,op);
        }
        
        int com=dp[0];
        for(int i=1;i<5;++i)
            if(com!=dp[i])
                return -1;        
        return ret;
 
    }
};

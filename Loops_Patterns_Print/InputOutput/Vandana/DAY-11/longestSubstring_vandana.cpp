class Solution {
public:
    int lengthOfLongestSubstring(string s) {
       int last[256];
        int maxSize = 0;
        memset(last, -1, sizeof(last));
        int beginPos = 0;
        for (int lastPos = 0; lastPos < s.size(); lastPos++) {
           if (last[s[lastPos]] < beginPos) {
               maxSize = max(maxSize, lastPos-beginPos+1);
           } else {
               beginPos = last[s[lastPos]] + 1;
           }
           last[s[lastPos]] = lastPos;
        }

        return maxSize;
    }
};
                OR
#include <iostream>
#include <string.h>
using namespace std;
int main(){
int cnt[256];
string s = "bbbb";

    memset(cnt,-1,sizeof(cnt));
    int i=-1, res = 0;
    for(int j=0; j<s.size(); j++){
        if(cnt[s[j]]>i)
            i=cnt[s[j]];
        cnt[s[j]]=j;
        res=max(res, j-i);
    }
    cout<<res;


}

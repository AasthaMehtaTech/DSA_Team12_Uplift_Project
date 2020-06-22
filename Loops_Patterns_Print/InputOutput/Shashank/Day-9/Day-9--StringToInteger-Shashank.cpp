class Solution {
public:
  int myAtoi(string str) {
    stringstream ss(str);
    int ans=0;
    ss>>ans;
      return ans;
    }
};

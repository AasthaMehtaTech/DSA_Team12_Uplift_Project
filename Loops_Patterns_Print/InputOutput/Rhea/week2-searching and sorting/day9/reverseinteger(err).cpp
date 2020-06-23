class Solution {
public:
    int reverse(int x) {
        if(x>0){
            int rev = 0;
        while (x > 0) {
            int rd = x % 10;
            x /= 10;
            rev = rev * 10 + rd;
        }
        return rev;
        }
        else{
            int rev = 0;
            x=-x;
            while (x > 0) {
             int rd = x % 10;
             x /= 10;
             rev = rev * 10 + rd;
        }
        return -rev;
        }
    }
};

//Given a 32-bit signed integer, reverse digits of an integer.
//Assume we are dealing with an environment which could only store integers within the 32-bit signed integer range: [−231,  231 − 1]
// For the purpose of this problem, assume that your function returns 0 when the reversed integer overflows.

class Solution {
public:
    int reverse(int x) {
   long long int rev=0,prev_rev=0,d;
   long long int y = abs(x);
        while(y>0)
        {
            d = y%10;
           if ((rev  > INT_MAX/ 10) || (rev  < INT_MIN/ 10))
					return 0;
            rev = rev * 10 + d;
            y /= 10;
        }

        if(x<0)
            rev = -(rev);
        return rev;
    }
};

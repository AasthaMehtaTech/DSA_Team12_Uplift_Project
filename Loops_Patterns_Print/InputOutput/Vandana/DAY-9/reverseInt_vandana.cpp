class Solution {
public:
    int reverse(int x) {
        int rev=0,rem;
        while(x!=0){
            rem = x%10;
              x = x/10;

            if ((rev  > INT_MAX/ 10) || (rev  < INT_MIN/ 10)){
					return 0;
        }
          rev = rev*10 + rem;
        }
        return rev;


    }
};

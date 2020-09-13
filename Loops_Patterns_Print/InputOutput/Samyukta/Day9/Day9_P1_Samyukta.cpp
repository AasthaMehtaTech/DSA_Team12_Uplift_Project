class Solution {
public:
    int reverse(int x) {
        int rev=0;
        while(x!=0)
        {
            int pop=x%10;
            x=x/10;
            if(rev>INT_MAX/10 || (rev==INT_MAX/10 && pop>7))    //The biggest number an Integer can hold in space is 2147483647     
                return 0;                                       //So, (Integer.MAX_VALUE / 10) is equal to 214748364
            if(rev<INT_MIN/10 || (rev==INT_MIN/10 && pop<-8))
                return 0;                                      //so if the pop is more then 7 that means that an Integer can't hold that amount of space.
            rev=rev*10+pop;                                    //The same logic goes into -8 which is Integer.MIN_VALUE.
        }
        return rev;
    }
};

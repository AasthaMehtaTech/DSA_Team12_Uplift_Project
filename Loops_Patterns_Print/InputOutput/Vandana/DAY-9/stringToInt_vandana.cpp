class Solution {
public:
    int myAtoi(string str) {
        stringstream s(str);
        int x = 0;
        s>>x;
        return x;

    }
};

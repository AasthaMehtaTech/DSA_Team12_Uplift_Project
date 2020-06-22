class Solution {
public:
    int reverse(int x) {
			int nint = 0;
			int new_int;
			while (x != 0){
				new_int = x % 10;
				x = x / 10;
				if ((nint  > INT_MAX/ 10) || (nint  < INT_MIN/ 10)){
					return 0;
				}
				nint = nint * 10 + new_int;
			}
			return nint;
		}
};

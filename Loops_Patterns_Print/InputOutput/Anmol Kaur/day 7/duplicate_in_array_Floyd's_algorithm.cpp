//Find the duplicate in array of N integers. It could be repeated more than once

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = nums.size();
        if ( n == 0 || n == 1)
            return 0;
        int tortoise = nums[0];
    int hare = nums[0];
    do {
      tortoise = nums[tortoise];
      hare = nums[nums[hare]];
    } while (tortoise != hare);

    // Find the "entrance" to the cycle.
    tortoise = nums[0];
    while (tortoise != hare) {
      tortoise = nums[tortoise];
      hare = nums[hare];
    }

    return hare;
}

};


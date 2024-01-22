class Solution {
public:
    bool check(vector<int>& nums) {
        int jumps = 0;
        int len = nums.size();
        for (int i = 0; i < len; i++) {
            if (nums[i] > nums[(i + 1)%len] ) {
                jumps++;
            }
        }
        return jumps < 2;
    }
};
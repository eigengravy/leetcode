class Solution {
public:
    bool check(vector<int>& nums) {
        int jumps = 0;
        if (nums[nums.size() - 1] > nums[0]) {
            jumps++;
        }
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i - 1] > nums[i]) {
                jumps++;
            }
        }
        return jumps < 2;
    }
};
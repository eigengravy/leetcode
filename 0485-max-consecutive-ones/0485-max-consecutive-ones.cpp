class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int len=0;
        int max_len=0;
        for(auto num: nums){
            if(num == 1){
                len++;
                max_len = max(len, max_len);
            } else {
                len = 0;
            }
        }
        return max_len;
    }
};
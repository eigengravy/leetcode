class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int i = 0, j = 0;
        int len = 0;
        while (i + j < nums.size()) {
            if (nums[i+j] == 0){
                i=i+j+1;
                j=0;
            } else {
                j++;
                if(j>len){
                    len=j;
                }
                continue;
            }
        }
        return len;
    }
};
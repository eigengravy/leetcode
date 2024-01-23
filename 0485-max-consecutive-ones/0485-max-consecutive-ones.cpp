class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int i = 0, j = 0;
        int len = 0;
        while (i + j < nums.size()) {
            if (nums[i+j] == 0){
                i++;
                j=0;
            } else {
                j++;
                if(j>len){
                    len=j;
                }
                continue;
            }
            // if (nums[i] == 1 && i != nums.size()-1) {
            //     j++;
            //     if (nums[i + j] == 1) {
            //         continue;
            //     } else {
            //         i += j;
            //         if (j > len) {
            //             len = j;
            //         }
            //         j = 0;
            //     }
            // }
            // i++;
        }
        return len;
    }
};
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int left,right;
        int start=-1,end=-1;

        left = 0;
        right = nums.size() - 1;

        while (left <= right) {
            int mid = (left + right) / 2;
           if (nums[mid] < target) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }

        start = left;

        left = 0;
        right = nums.size() - 1;

        while (left <= right) {
            int mid = (left + right) / 2;
            if (nums[mid] <= target) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
        end = right;

        if (start <= end) return {start,end};
        else return {-1,-1};
    }
};
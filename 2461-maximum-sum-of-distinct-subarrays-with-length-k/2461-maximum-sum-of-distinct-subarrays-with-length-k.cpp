class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        long long sum = 0, maxSum = 0;
        unordered_map<int,int> mp;

        for(int i=0;i<k;i++){
            sum+=nums[i];
            mp[nums[i]]++;
        }

        if (mp.size()==k){
            maxSum = max(sum, maxSum);
        }

        for(int i=k;i<n;i++){
            sum+=nums[i];
            sum-=nums[i-k];
            mp[nums[i]]++;
            mp[nums[i-k]]--;
            if (mp[nums[i-k]]==0) {
                mp.erase(nums[i-k]);
            }
            if (mp.size()==k) {
                maxSum = max(sum, maxSum);
            }
        }

        return maxSum;
    }
};
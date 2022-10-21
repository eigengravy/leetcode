class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        for i, num in enumerate(nums):
            nums[i] = None
            if (target - num) in nums:
                return [i,nums.index(target-num)]
                
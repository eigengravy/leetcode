class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        m = {i:nums.count(i) for i in set(nums)}
        m = sorted(m.items(), reverse=True, key=lambda kv: kv[1])
        return map(lambda kv: kv[0], m[:k])

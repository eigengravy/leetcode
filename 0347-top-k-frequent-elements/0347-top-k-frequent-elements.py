class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        return map(lambda kv: kv[0], Counter(nums).most_common(k))

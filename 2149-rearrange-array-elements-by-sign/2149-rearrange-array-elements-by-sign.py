class Solution:
    def rearrangeArray(self, nums: List[int]) -> List[int]:
        return list(itertools.chain.from_iterable(zip(filter(lambda x: x>0, nums),filter(lambda x: x<0, nums))))

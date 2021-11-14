class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        tmp = set(nums)
        return len(nums) - len(tmp)

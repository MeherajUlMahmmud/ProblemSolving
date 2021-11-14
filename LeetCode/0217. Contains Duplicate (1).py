class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        map = dict()
        for i in range(len(nums)):
            if nums[i] in map:
                return True
            else:
                map[nums[i]] = 1
        return False

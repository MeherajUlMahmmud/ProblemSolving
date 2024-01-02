class Solution(object):
    def countPairs(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: int
        """
        count = 0

        # O(n^2) Solution
        for i in range(len(nums)):
            for j in range(i + 1, len(nums)):
                curr_sum = nums[i] + nums[j]
                if curr_sum < target:
                    count += 1

        # O(nlogn) Solution
        # nums.sort()

        # left = 0
        # right = len(nums) - 1
        # while left < right:
        #     current_sum = nums[left] + nums[right]
        #     if current_sum < target:
        #         count += right - left
        #         left +=1
        #     else:
        #         right -= 1

        return count

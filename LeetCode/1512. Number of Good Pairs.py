class Solution(object):
    def numIdenticalPairs(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        count = 0

        # Naive Approach
        # for i in range(len(nums)):
        #     for j in range(i + 1, len(nums)):
        #         if nums[i] == nums[j] :
        #             count += 1

        # Optimized Approach
        num_freq_map = {}
        for num in nums:
            count += num_freq_map.get(num, 0)
            num_freq_map[num] = num_freq_map.get(num, 0) + 1

        return count

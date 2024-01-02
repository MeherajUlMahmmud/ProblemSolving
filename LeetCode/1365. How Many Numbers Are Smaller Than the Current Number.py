class Solution(object):
    def smallerNumbersThanCurrent(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """

        # Naive Approach
        # smaller_nums_counts = []
        # for i in range(len(nums)):
        #     count = 0
        #     for j in range(len(nums)):
        #         if nums[i] > nums[j]:
        #             count += 1
        #     smaller_nums_counts.append(count)

        # return smaller_nums_counts

        count = [0] * 101  # Assuming the numbers are in the range [0, 100]

        for num in nums:
            count[num] += 1

        # Calculate the prefix sum of the count array
        for i in range(1, len(count)):
            count[i] += count[i - 1]

        # Determine the number of smaller elements for each element in nums
        result = [count[num - 1] if num != 0 else 0 for num in nums]

        return result

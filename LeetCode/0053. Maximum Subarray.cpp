class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {
        int maxSum = nums[0], curSum = nums[0];
        for (int i = 1; i < nums.size(); i++)
        {
            if (curSum < 0)
                curSum = 0;
            curSum += nums[i];
            maxSum = max(curSum, maxSum);
        }
        return maxSum;
    }
};
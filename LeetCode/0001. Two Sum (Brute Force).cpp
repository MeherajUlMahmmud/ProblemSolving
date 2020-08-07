class Solution
{
public:
    vector<int> twoSum(vector<int>& nums, int target)
    {
        vector<int> arr;
        int n = nums.size();
        for(int i = 0;  i < n; i++)
        {
            for(int j = 0; j < n; j++)
            {
                if(i != j)
                {
                    if(nums[i] + nums[j] == target)
                    {
                        arr.push_back(i);
                        arr.push_back(j);
                        return arr;
                    }
                }
            }
        }
        return arr;
    }
};

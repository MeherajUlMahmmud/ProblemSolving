class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        int n = nums.size();

        // vector<int> arr;
        // for (int i = 0; i < n; i++)
        // {
        //     for (int j = 0; j < n; j++)
        //     {
        //         if (i != j && nums[i] + nums[j] == target)
        //         {
        //             arr.push_back(i);
        //             arr.push_back(j);
        //             return arr;
        //         }
        //     }
        // }
        // return arr;

        int i = 0, j = n - 1;

        vector<pair<int, int>> nums2;
        for (int i = 0; i < n; i++)
        {
            pair<int, int> temp(nums[i], i);
            nums2.push_back(temp);
        }

        sort(nums2.begin(), nums2.end());

        while (i < j)
        {
            if (nums2[i].first + nums2[j].first == target)
            {
                return {nums2[i].second, nums2[j].second};
            }
            else if (nums2[i].first + nums2[j].first > target)
            {
                j--;
            }
            else
            {
                i++;
            }
        }
        return {-1, -1};
    }
};

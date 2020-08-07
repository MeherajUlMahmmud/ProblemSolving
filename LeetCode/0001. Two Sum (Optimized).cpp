class Solution
{
public:
    vector<int> twoSum(vector<int>& nums, int target)
    {
        vector<int> arr;
        // PAIR is an STL data structure
        // it is more like an struct
        /*
        struct pair {
            int first;
            int second;
        };
        */
        vector<pair<int, int>> nums2;
        
        int n = nums.size();
        
        // copying elements and indices of nums into nums2
        for(int i = 0; i < n; i++) {
            pair<int, int> temp(nums[i], i);
            nums2.push_back(temp);
        }
        
        // sorting nums2 in ascending order
        sort(nums2.begin(), nums2.end());
        
        int i = 0, j = nums2.size()-1;
        while(i < j) {
            if(nums2[i].first + nums2[j].first == target) {
                arr.push_back(nums2[i].second);
                arr.push_back(nums2[j].second);
                return arr;
            }
            else if(nums2[i].first + nums2[j].first > target) {
                j--;
            }
            else {
                i++;
            }
        }
        return arr;
    }
};

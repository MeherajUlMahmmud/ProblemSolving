class Solution {
public:
    int rob(vector<int>& nums) {
        if(nums.size() == 0)
            return 0;
        if(nums.size() == 1)
            return nums[0];
        
        int n = nums.size();
        int houses[n+1];
        houses[0] = nums[0];
        houses[1] = max(nums[0], nums[1]);
        for(int i = 2; i < n; i++) {
            houses[i] = max(nums[i] + houses[i-2], houses[i-1]);
        }
        return houses[n-1];
    }
};

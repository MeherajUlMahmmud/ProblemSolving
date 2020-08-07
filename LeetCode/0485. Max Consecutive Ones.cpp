class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int currMax = 0, finalMax = 0;
        
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] == 1) {
                currMax++;
            }
            else {
                finalMax = max(currMax, finalMax);
                currMax = 0;
            }
        }
        finalMax = max(currMax, finalMax);
        
        return finalMax;
    }
};

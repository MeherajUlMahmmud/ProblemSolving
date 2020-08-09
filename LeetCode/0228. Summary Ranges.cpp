class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
		vector<string> result;
		int lower = 0;
		
		for (int i = 0; i < nums.size(); i++) {
			if (i+1 < nums.size() && nums[i] + 1 == nums[i+1]) {
				
			}
            else{
                result.push_back(subrange(nums[lower], nums[i]));
				lower = i+1;
            }
		}
		return result;
	}
	string subrange(int lower, int higher) {
		return lower == higher ? to_string(lower) : to_string(lower) + "->" + to_string(higher);
	}
};

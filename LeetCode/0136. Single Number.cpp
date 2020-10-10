class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int, int> occ;
        for(int i = 0; i < nums.size(); i++) {
            occ[nums[i]] += 1;
            occ[nums[i]];
        }
        
        for(const auto itr : occ) {
            if(itr.second == 1)
                return itr.first;
        }
        return 0;
    }
};
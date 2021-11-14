class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int, int> umap;
        for (int i = 0; i < nums.size(); i++) {
            umap[nums[i]]++;
        }
        for (auto it : umap) {
            if(it.second >= 2)
                return true;
        }
        return false;
    }
};

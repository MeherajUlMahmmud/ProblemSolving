class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int richest = 0;
        
        for(int i = 0; i < accounts.size(); i++)
            richest = max(richest, accumulate(accounts[i].begin(), accounts[i].end(), 0));
        
        return richest;
    }
};
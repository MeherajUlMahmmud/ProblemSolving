class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maximum = 0, minimum = 99999;
        for(int i = 0; i < prices.size(); i++) {
            if(prices[i] < minimum)
                minimum = prices[i];
            else
                maximum = max(maximum, prices[i] - minimum);
        }
        return maximum;
    }
};

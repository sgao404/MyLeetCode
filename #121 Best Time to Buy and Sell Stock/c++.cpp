class Solution {
public:
    int maxProfit(vector<int> &prices) {
        int min = 0;
        int gap = 0;
        for(int i = 0; i < prices.size(); i++) {
            if(prices[i] < prices[min]) min = i;
            if(prices[i] - prices[min] > gap) gap = prices[i] - prices[min];
        }
        return gap;
    }
};
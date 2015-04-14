class Solution:
    # @param prices, a list of integer
    # @return an integer
    def maxProfit(self, prices):
        minn = 0
        gap = 0
        for i in range(0,len(prices)):
            if prices[i] < prices[minn]:
            	minn = i;
            if prices[i] - prices[minn] > gap:
            	gap = prices[i] - prices[minn];
            i+=1
        return gap
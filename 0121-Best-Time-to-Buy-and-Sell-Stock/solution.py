class Solution(object):
    def maxProfit(self, prices):
        max_pro=0
        min_price=prices[0]
        for i in range(len(prices)):
            if prices[i]<min_price:
                min_price=prices[i]
            pro=prices[i]-min_price
            if pro>max_pro:
                max_pro=pro
        return max_pro
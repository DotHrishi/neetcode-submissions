class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        mymin=prices[0]
        ans=0
        for price in prices:
            if price<mymin:
                mymin=price
            if price-mymin>ans:
                ans=price-mymin
            
        return ans
        
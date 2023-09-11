class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        gmax = 0
        mn = 100001
        for p in prices:
            mn = min(mn, p)
            gmax = max(gmax, p- mn)
        return gmax
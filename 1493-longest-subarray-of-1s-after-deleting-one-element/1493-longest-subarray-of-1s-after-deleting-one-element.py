class Solution:
    def longestSubarray(self, nums: List[int]) -> int:
        loo, k = [], 0
        for val in nums:
            if val == 1:
                k+=1
            else:
                loo.append(k)
                k=0
        if k!=0:
            loo.append(k)
        mx=0
        if len(loo) ==1:
            mx = loo[0]
        mx = mx-1
        for i in range(len(loo)-1):
            mx = max(mx, loo[i]+loo[i+1])
            
        return mx
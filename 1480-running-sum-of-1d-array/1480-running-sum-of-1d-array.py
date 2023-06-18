class Solution:
    def runningSum(self, nums: List[int]) -> List[int]:
        res = []
        sum = 0
        for item in nums:
            sum = sum + item
            res.append(sum)
        return res
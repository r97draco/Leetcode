class Solution:
    def runningSum(self, nums: List[int]) -> List[int]:
        res = [];
        sum = 0;
        for index in range(0, len(nums)):
            sum = sum + nums[index];
            nums[index]=sum;
        return nums;
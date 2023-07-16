class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        st = {}
        for index in range(0,len(nums)):
            if target - nums[index] in st:
                return [index, st[target-nums[index]]]
            else :
                st[nums[index]]=index
        return [-1,-1]
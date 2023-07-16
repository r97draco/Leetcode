class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        nums = sorted(nums)
        for idx in range(len(nums)-1):
            if nums[idx] == nums[idx+1]:
                return True
        return False
        
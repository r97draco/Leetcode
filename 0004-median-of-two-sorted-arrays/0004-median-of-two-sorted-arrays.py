class Solution:
    def findMedianSortedArrays(self, nums1: List[int], nums2: List[int]) -> float:
        l1, l2 = 0 , 0
        sr = []
        while l1 < len(nums1) and l2 < len(nums2):
            if nums1[l1] <= nums2[l2]:
                sr.append(nums1[l1])
                l1+=1
            else :
                sr.append(nums2[l2])
                l2+=1
        
        while l1 < len(nums1):
            sr.append(nums1[l1])
            l1+=1
        while l2 < len(nums2):
            sr.append(nums2[l2])
            l2+=1
        
        sz = len(sr)
        
        if sz %2 == 1:
            ans = sr[sz//2]
        else:
            ans = (sr[(sz-1)//2] + sr[sz//2])/2
        
        return ans